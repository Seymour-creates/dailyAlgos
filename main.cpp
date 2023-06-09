#include <iostream>
#include "algoProblemHeaders/remove_duplicate_from_linked_list.hpp"
#include "algoProblemHeaders/Path_Sum_of_Tree.hpp"
#include "algoProblemHeaders/2D_array_word_search.hpp"
#include "algoProblemHeaders/Binary_Search_Algos.hpp"
#include "algoProblemHeaders/searchAndSort.hpp"
#include "algoProblemHeaders/twoPointersVector.hpp"
using namespace std;


int main () {
//    // Remove duplicate value from singly linked list
//    Remove_Dup_From_List removeDupFromList;
//    auto* node = new ListNode(1, new ListNode(1,  new ListNode (2, new ListNode(2, new ListNode(3, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(5, new ListNode(6))))))))));
//    removeDupFromList.testImplementation(node);
//
//    // Find if path to leaf node exists that adds to target value
//    Path_Sum_Tree pathSumTree;
//    auto* root1 = new TreeNode(5);
//    root1->left = new TreeNode(4);
//    root1->right = new TreeNode(8);
//    root1->left->left = new TreeNode(11);
//    root1->right->right = new TreeNode(4);
//    root1->left->left->left = new TreeNode(7);
//    root1->left->left->right = new TreeNode(2);
//    root1->right->left = new TreeNode(13);
//    root1->right->right->right = new TreeNode(1);
//    int targetSum1 = 22;
//    bool expectedResult1 = true;
//
//    cout << "Expected Results --> " << expectedResult1 << "\n" << "Actual results --> ";
//    pathSumTree.testImplementation(root1, targetSum1);
//
//    // Find if word exists in 2D array.. edge of characters must touch to form word
//    vector<vector<char>> board1 = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
//    string word1 = "ABCCED";
//    string word2 = "SEE";
//    string word3 = "ABCB";
//    TwoD_Word_search traveler;
//    traveler.testImplementation(board1, word1);
//    traveler.testImplementation(board1, word2);
//    traveler.testImplementation(board1, word3);

//    BinarySearch bs;
//
//    // Test case for searchInsert function
//    std::vector<int> nums1 = {1, 3, 5, 6, 7, 8, 10, 12, 15, 27, 33, 35, 38};
//    int target1 = 11;
//    bs.testImplementation(&BinarySearch::searchInsert, nums1, target1);
//
//    // Test case for searchTargetIndex function
//    std::vector<int> nums2 = {-1, 0, 3, 5, 9, 12, 14, 15, 19};
//    int target2 = 10;
//    bs.testImplementation(&BinarySearch::searchTargetIndex, nums2, target2);

//    SearchAndSort sas;
//
//    // Test sortedSquares
//    std::vector<int> input1 = {-4, -1, 0, 3, 10};
//    std::vector<int> expectedResult1 = {0, 1, 9, 16, 100};
//    sas.testImplementation(&SearchAndSort::sortedSquares, input1);
//
//    // Test rotate
//    std::vector<int> input2 = {1, 2, 3, 4, 5, 6, 7};
//    int k = 3;
//    std::vector<int> expectedResult2 = {5, 6, 7, 1, 2, 3, 4};
//    sas.testImplementation(&SearchAndSort::rotate, input2, k);

    TwoPointers_Vector tpv;

    std::cout << "\nTesting moveZeroes:" << std::endl;
    std::vector<int> test1 = {0, 1, 0, 3, 12};
    std::vector<int> test2 = {1, 0, 0, 2, 0};
    std::vector<int> test3 = {2, 1, 0, 0, 4};
    std::vector<int> test4 = {0, 0, 0, 0, 1};
    tpv.testImplementation(&TwoPointers_Vector::moveZeroes, test1);
    tpv.testImplementation(&TwoPointers_Vector::moveZeroes, test2);
    tpv.testImplementation(&TwoPointers_Vector::moveZeroes, test3);
    tpv.testImplementation(&TwoPointers_Vector::moveZeroes, test4);

    std::cout << "\nTesting twoSum:" << std::endl;
    std::vector<int> test5 = {2, 7, 11, 15};
    std::vector<int> test6 = {1, 2, 3, 4, 5, 6};
    std::vector<int> test7 = {-3, 1, 5, 6, 9};
    std::vector<int> test8 = {1, 3, 5, 7, 9};

    tpv.testImplementation(&TwoPointers_Vector::twoSum, test5, 9);
    tpv.testImplementation(&TwoPointers_Vector::twoSum, test6, 7);
    tpv.testImplementation(&TwoPointers_Vector::twoSum, test7, 3);
    tpv.testImplementation(&TwoPointers_Vector::twoSum, test8, 12);

    return 0;

}

