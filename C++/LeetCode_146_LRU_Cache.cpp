// https://leetcode.com/problems/lru-cache/description/#
#include <unordered_map>
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
        if (numberOfKeys == capacity)
        {
            int temp;
            temp = que.front();
            que.pop();

            unordered_map<int, pair<int, int>>::iterator iter;
            while ((iter = m.find(temp))->second.second == 1)
            {
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
            que.push(value);
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