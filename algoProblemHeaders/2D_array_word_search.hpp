
#ifndef DAILYALGO_2D_ARRAY_WORD_SEARCH_HPP
#define DAILYALGO_2D_ARRAY_WORD_SEARCH_HPP
#include <iostream>
#include <vector>
using namespace std;

class TwoD_Word_search {
public:
    bool exist(vector<vector<char>> &board, string word);
    void testImplementation(vector<vector<char>> &board, string word);

private:
    bool traveler(vector<vector<char>>& board, int x, int y, int row, int col, string word);
};
#endif //DAILYALGO_2D_ARRAY_WORD_SEARCH_HPP
