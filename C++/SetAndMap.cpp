#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main(void)
{
    // set practice
    set<string> s;
    s.insert("No");
    s.insert("Ha");
    s.insert("Jeong");
    for(const auto n : s)
    {
        cout << n << endl;
    }
    if(s.find("Ha") != s.end())
        cout << "Found Ha!" << endl;
    else
        cout << "Not Found Ha!" << endl;    
    if(s.find("wow") != s.end())
        cout << "Found wow!" << endl;
    else
        cout << "Not Found wow!" << endl;

    // map practice
    map<string, int> m;
    m["No"] = 1;
    m["Ha"] += 5;
    m["Jeong"] = 10;
    m.insert(pair<string, int>("hello", 3));

    // map is ordered by dictionary order automatically.
    for(const auto n : m)
    {
        cout << n.first << " : " << n.second << endl;
    }

    if(m.find("Jeong") != m.end())
        cout << "I found Jeong!" << endl;
    else
        cout << "Couldn't find Jeong!" << endl;

    if(m.find("HAHA") != m.end())
        cout << "I found HAHA" << endl;
    else
        cout << "Couldn't find HAHA" << endl;

    
    system("pause");
    return 0;
}