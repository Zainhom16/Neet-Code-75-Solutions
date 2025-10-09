#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  vector<int> result(2, 0);
  for (int i = 0; i < nums.size() - 2; i++)
  {
    for (int j = i + 1; j < nums.size() - 1; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        result.at(0) = i;
        result.at(1) = j;
        return result;
      }
    }
  }
}

int main()
{
}