/*

Maximum Subarray:
----------------
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Follow up: If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

Example 2:
Input: nums = [1]
Output: 1

Example 3:
Input: nums = [0]
Output: 0

Example 4:
Input: nums = [-1]
Output: -1

Example 5:
Input: nums = [-2147483647]
Output: -2147483647
*/

#include <iostream>
using namespace std;

int main()
{
    int a[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(a) / sizeof(int);
    int sum = 0;
    int maxsum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > maxsum)
            maxsum = sum;
        if (sum < 0)
            sum = 0;
    }
    cout << maxsum << endl;
}