// https://leetcode.com/problems/lru-cache/description/#
#include <unordered_map>
#include <iostream>
#include <iterator>
#include <queue>
using namespace std;

class LRUCache
{
public:
    LRUCache(int capacity)
    {
        this->capacity = capacity;
        this->numberOfKeys = 0;
    }

    int get(int key)
    {
        auto ret = m.find(key);
        if (ret != m.end())
        {
            ret->second.second = 1;
            return ret->second.first;
        }
        else
            return -1;
    }

    void put(int key, int value)
    {
        if (m.find(key) != m.end())
            return;
        if (numberOfKeys == capacity)
        {
            int temp;
            temp = que.front();
            que.pop();
            cout << "temp: " << temp << endl;
            unordered_map<int, pair<int, int>>::iterator iter;
            while ((iter = m.find(temp))->second.second == 1)
            {
                cout << "iter->first: " << iter->first << endl;
                cout << "iter->second.second: " << iter->second.second << endl;
                iter->second.second = 0;
                que.push(temp);
                temp = que.front();
                que.pop();
            }

            m.erase(iter);
            m.insert(make_pair(key, make_pair(value, 0)));
            que.push(value);
        }
        else
        {
            m.insert(make_pair(key, make_pair(value, 0)));
            que.push(key);
            numberOfKeys++;
        }
    }

private:
    unordered_map<int, pair<int, int>> m; // pair<int, int> first key, second ref bit.
    int capacity;
    int numberOfKeys;
    queue<int> que; // key
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
int main(void)
{
    LRUCache *obj = new LRUCache(2);

    cout << "put(2, 1)" << endl;
    obj->put(2, 1);

    cout << "put(2, 2)" << endl;
    obj->put(2, 2);

    cout << "get(2) : " << obj->get(2) << endl;

    cout << "put(3, 2)" << endl;
    obj->put(3, 2);

    // cout << "get(2) : " << obj->get(2) << endl;

    // cout << "get(3) : " << obj->get(3) << endl;

    system("pause");
    return 0;
}