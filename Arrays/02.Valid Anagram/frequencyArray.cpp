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
    int arr[26]{0};
    for (char c : s)
    {
      arr[c - 'a']++;
    }

    for (char c : t)
    {
      if (--arr[c - 'a'] < 0)
        return false;
    }

    return true;
  }
};

int main()
{
}
