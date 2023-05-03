#include "../algoProblemHeaders/Binary_Search_Algos.hpp"

int BinarySearch::firstBadVersion(int n)
{

}

int BinarySearch::searchInsert(vector<int> &nums, int target)
{
    int hi = nums.size() - 1;
    int lo = 0;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) return mid;
        nums[mid] < target ? lo = mid + 1 : hi = mid - 1;
    }
    return lo;
}

int BinarySearch::searchTargetIndex(vector<int> &nums, int target)
{
    auto front = nums.begin();
    auto back = nums.end() -1;
    while (front <= back)
    {
        auto mid = front + (back - front) / 2;
        if (*mid == target)
        {
            return distance(nums.begin(), mid);
        }
        if (*mid < target)
        {
            front = mid;
            advance(front, 1);
        }
        else
        {
            back = mid;
            advance(back, -1);
        }
    }
    return -1;
}

