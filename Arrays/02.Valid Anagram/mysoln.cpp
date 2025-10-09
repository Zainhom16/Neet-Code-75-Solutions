#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    if (s.length() != t.length())
      return false;
    unordered_multiset<char> s1;
    for (char c : s)
    {
      s1.insert(c);
    }

    for (char c : t)
    {
      auto it = s1.find(c);
      if (it == s1.end())
        return false;
      s1.erase(it);
    }

    return s1.empty();
  }
};

int main()
{
}
