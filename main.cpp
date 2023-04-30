#include <iostream>
#include "remove_duplicate_from_linked_list.hpp"
#include "Path_Sum_of_Tree.hpp"
using namespace std;


int main () {
    Remove_Dup_From_List removeDupFromList;
    auto* node = new ListNode(1, new ListNode(1,  new ListNode (2, new ListNode(2, new ListNode(3, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(5, new ListNode(6))))))))));
    removeDupFromList.testImplementation(node);

    Path_Sum_Tree pathSumTree;
    auto* root1 = new TreeNode(5);
    root1->left = new TreeNode(4);
    root1->right = new TreeNode(8);
    root1->left->left = new TreeNode(11);
    root1->right->right = new TreeNode(4);
    root1->left->left->left = new TreeNode(7);
    root1->left->left->right = new TreeNode(2);
    root1->right->left = new TreeNode(13);
    root1->right->right->right = new TreeNode(1);
    int targetSum1 = 22;
    bool expectedResult1 = true;

    cout << "Expected Results --> " << expectedResult1 << "\n" << "Actual results --> ";
    pathSumTree.testImplementation(root1, targetSum1);
    return 0;

}

