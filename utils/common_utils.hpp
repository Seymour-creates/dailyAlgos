#ifndef DAILYALGO_COMMON_UTILS_HPP
#define DAILYALGO_COMMON_UTILS_HPP

#include <iostream>
#include <vector>

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
#endif //DAILYALGO_COMMON_UTILS_HPP
