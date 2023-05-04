#include "../algoProblemHeaders/twoPointersVector.hpp"

/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order,
find two numbers such that they add up to a specific target number.
Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2,
added by one as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.
 */
vector<int> TwoPointers_Vector::twoSum(vector<int> &numbers, int target) {
    int lo = 0, hi = numbers.size() - 1;
    while (lo < hi)
    {
        int sum = numbers[lo] + numbers[hi];
        if (sum == target) return vector<int>({lo + 1, hi + 1});
        else if (sum < target) lo++;
        else hi--;
    }
    return vector<int>({-1, -1});
}

/*
Given an integer array nums, move all 0's to the end of it while maintaining
the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.
 */
vector<int> TwoPointers_Vector::moveZeroes(vector<int> &nums) {
    auto first = nums.begin();
    auto second = nums.begin() + 1;
    while (second != nums.end())
    {
        if (*first == 0 && *second == 0)
        {
            second++;
        }
        else if (*first == 0 && *second != 0)
        {
            *first = *second;
            *second = 0;
            first++, second++;
        }
        else
        {
            second++,first++;
        }
    }
    return nums;
}
