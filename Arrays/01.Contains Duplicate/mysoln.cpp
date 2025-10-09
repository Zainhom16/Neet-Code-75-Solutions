#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  bool hasDuplicate(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
      if (nums[i] == nums[i + 1])
        return true;
    }
    return false;
  }
};

int main()
{
  Solution s;
  vector<int> nums = {1, 2, 3, 1};
  // boolalph to print boolean values as true/false instead of 1/0
  cout << boolalpha << s.hasDuplicate(nums);
}
