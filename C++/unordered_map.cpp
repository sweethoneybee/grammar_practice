#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <map>
using namespace std;

int main(void)
{
  map<int, pair<int, int>> m;
  m.insert(make_pair(1, make_pair(10, 20)));
  map<int, pair<int, int>>::iterator iter = m.find(1);
  cout << iter->first << endl;
  cout << iter->second.first << endl;
  iter->second.second = 30;
  cout << iter->second.second << endl;

  system("pause");
  return 0;
}