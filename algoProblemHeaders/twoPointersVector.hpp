#ifndef DAILYALGO_TWOPOINTERSVECTOR_HPP
#define DAILYALGO_TWOPOINTERSVECTOR_HPP

#include <iostream>
#include <vector>
#include "../utils/common_utils.hpp"


using namespace std;

class TwoPointers_Vector {
public:

    vector<int> moveZeroes(vector<int>& nums);

    vector<int> twoSum(vector<int>& numbers, int target);

    template<typename F, typename... Args>
    void testImplementation(F fn, Args&& ...args)
    {
        std::cout << "Input: ";
        ((std::cout << args << ' '), ...);
        auto result = (this->*fn)(std::forward<Args>(args)...);
        std::cout << "\nResult: " << result << endl;
    }


};


#endif //DAILYALGO_TWOPOINTERSVECTOR_HPP
