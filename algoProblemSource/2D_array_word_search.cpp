#include "../algoProblemHeaders/2D_array_word_search.hpp"

bool TwoD_Word_search::exist(vector<vector<char>> &board, string word)
{
    int row = board.size();
    int col = board[0].size();

    if (row == 1 && col == 1 ) return word.size() == 1 && board[0][0] == word[0];
    for (int x =0; x < row; x++)
    {
        for (int y = 0; y < col; y++)
        {
            if (board[x][y] == word[0])
            {
                if (traveler(board, x, y, row, col, word)) return true;
            }
        }
    }
    return false;
}

bool TwoD_Word_search::traveler(vector<vector<char>> &board, int x, int y, int row, int col, string word)
{
    if (word.size() == 0) return true;
    if (x < 0 || y < 0 || x >= row || y >= col || board[x][y] != word[0]) return false;
    char temp = board[x][y];
    board[x][y] = '.';
    bool found =    traveler(board, x+1, y, row, col, word.substr(1)) ||
                    traveler(board, x-1, y, row, col, word.substr(1)) ||
                    traveler(board, x, y+1, row, col, word.substr(1)) ||
                    traveler(board, x, y-1, row, col, word.substr(1));
    board[x][y] = temp;
    return found;
}

void TwoD_Word_search::testImplementation(vector<vector<char>> &board, string word)
{
    cout << "Board:" << endl;
    for (const auto& row : board) {
        for (const auto& ch : row) {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << "Searching for word: " << word << endl;

    // Call the exist() method and print the result
    bool result = exist(board, word);
    cout << "Result: " << (result ? "true" : "false") << endl;
}