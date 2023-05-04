

#ifndef DAILYALGO_SEARCHANDSORT_HPP
#define DAILYALGO_SEARCHANDSORT_HPP
#include <vector>
#include <iostream>
#include "../utils/common_utils.hpp"

using namespace std;


class SearchAndSort {
public:
    vector<int> sortedSquares(vector<int>& nums);

    void rotate(vector<int>& nums, int k);

    template<typename F, typename... Args>
    void testImplementation(F fn, Args&& ...args)
    {
        if constexpr (std::is_same_v<std::invoke_result_t<F, SearchAndSort, Args...>, void>) {
            std::cout << "Input: ";
            ((std::cout << args << ' '), ...);

            (this->*fn)(std::forward<Args>(args)...);

            std::cout << "Result: ";
            ((std::cout << args << ' '), ...);

        } else {
            auto result = (this->*fn)(std::forward<Args>(args)...);

            std::cout << "Input: ";
            ((std::cout << args << ' '), ...);
            std::cout << "\nResult: " << result << std::endl;
        }

    }

};


#endif //DAILYALGO_SEARCHANDSORT_HPP
