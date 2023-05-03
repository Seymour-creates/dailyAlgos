

#ifndef DAILYALGO_SEARCHANDSORT_HPP
#define DAILYALGO_SEARCHANDSORT_HPP
#include <vector>
#include <iostream>
using namespace std;

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    os << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        os << vec[i];
        if (i < vec.size() - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}
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
