#ifndef DAILYALGO_REMOVE_DUPLICATE_FROM_LINKED_LIST_HPP
#define DAILYALGO_REMOVE_DUPLICATE_FROM_LINKED_LIST_HPP

#include <iostream>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Remove_Dup_From_List {
public:
    ListNode* deleteDuplicates(ListNode* head);
    void testImplementation(ListNode* head);
};

#endif //DAILYALGO_REMOVE_DUPLICATE_FROM_LINKED_LIST_HPP
