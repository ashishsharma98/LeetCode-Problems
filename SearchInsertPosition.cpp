/*
 Search Insert Position:
=======================
Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4

*/

#include <iostream>
#include <vector>
using namespace std;

int SearchInsert(vector<int> &nums, int target)
{
    int i = 0;
    int j = nums.size() - 1;
    int mid;
    while (i <= j)
    {
        mid = (i + j) / 2;

        if (nums[mid] == target)
            return mid;
        if (nums[mid] < target)
            i = mid + 1;
        else if (nums[mid] >= target)
            j = mid - 1;
    }

    if (nums[mid] < target)
        return mid + 1;
    return mid;
}

int main()
{
    vector<int> nums{1, 3, 5, 6};
    int target = 2;
    cout << SearchInsert(nums, target);
}