#include "../algoProblemHeaders/searchAndSort.hpp"


/*
 * Given an integer array nums sorted in non-decreasing order,
 * return an array of the squares of each number sorted in non-decreasing order.
*/
vector<int> SearchAndSort::sortedSquares(vector<int> &nums)
{
    int len = nums.size();
    vector<int> squared(len);
    int first = 0, last = len - 1, idx = len - 1;
    while ( first <= last )
    {
        if (abs(nums[first]) < abs(nums[last])) squared[idx--] = nums[last] * nums[last], last--;
        else squared[idx--] = nums[first] * nums[first], first++;
    }
    return squared;
}

/*
 * Given an integer array nums, rotate the array to the right by k steps,
 * where k is non-negative.
 */
void SearchAndSort::rotate(vector<int> &nums, int k)
{
    if (k >= nums.size()) k %= nums.size();
    std::rotate(nums.rbegin(), nums.rbegin() + k, nums.rend());
}
