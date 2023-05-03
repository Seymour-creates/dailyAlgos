#ifndef DAILYALGO_BINARY_SEARCH_ALGOS_HPP
#define DAILYALGO_BINARY_SEARCH_ALGOS_HPP
#include <iostream>
#include <vector>

using namespace std;
template <typename T>
void print_arg(const T& arg) {
    std::cout << arg << ' ';
}

template <typename T>
void print_vector(const std::vector<T>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
std::cout << ", ";
}
}
std::cout << "], ";
}

template <typename T>
void print_arg(const std::vector<T>& arg) {
    print_vector(arg);
}
class BinarySearch{
public:
    int searchTargetIndex(vector<int>& nums, int target);

    int firstBadVersion(int n);

    int searchInsert(vector<int>& nums, int target);

    template<typename F, typename... Args>
    void testImplementation(F fn, Args&& ...args)
    {
        auto result = (this->*fn)(std::forward<Args>(args)...);

        std::cout << "Input: ";
        (print_arg(args), ...);
        std::cout << "\nResult: " << result << std::endl;;
    }
};

#endif //DAILYALGO_BINARY_SEARCH_ALGOS_HPP
