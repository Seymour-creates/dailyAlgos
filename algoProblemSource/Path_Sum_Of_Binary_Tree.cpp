#include "../algoProblemHeaders/Path_Sum_of_Tree.hpp"

bool Path_Sum_Tree::hasPathSum(TreeNode* root, int targetSum)
{
        if (!root) return false;
        targetSum -= root->val;
        if ( !root->left && !root->right && targetSum == 0) return true;

        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
}

void Path_Sum_Tree::testImplementation(TreeNode* root, int targetSum)
{
    bool ans = Path_Sum_Tree::hasPathSum(root, targetSum);
    cout << ans << "\n";

}
