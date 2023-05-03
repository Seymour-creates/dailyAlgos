
#ifndef DAILYALGO_PATH_SUM_OF_TREE_HPP
#define DAILYALGO_PATH_SUM_OF_TREE_HPP
#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {};
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {};
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {};
};

class Path_Sum_Tree {
public:
    bool hasPathSum(TreeNode* root, int targetSum);
    void testImplementation(TreeNode* root, int targetSum);
};


#endif //DAILYALGO_PATH_SUM_OF_TREE_HPP
