#include <iostream>
#include "remove_duplicate_from_linked_list.hpp"
using namespace std;
//Definition for singly-linked list.


ListNode *Remove_Dup_From_List::deleteDuplicates(ListNode *head)
{

    // check if list is empty or has only one element
    if (head == nullptr || head->next == nullptr) return head;
    // create pointer that points to head of list
    ListNode* current = head;

    // loop through list
    while (current != nullptr && current->next != nullptr)
    {
        // if current node val equals the next node val
        if (current->val == current->next->val)
        {
            // capture the duplicate node
            ListNode* temp = current->next;
            // point the current.next to the node after the duplicate
            current->next = current->next->next;
            // delete the duplicate node
            delete temp;
        } else
        {
            current = current->next;
        }
    }
    // return head of list
    return head;
}


void Remove_Dup_From_List::testImplementation(ListNode *head)
{
    ListNode* node = new ListNode(1);
    node->next = new ListNode(1);
    node->next->next = new ListNode(1);
    node->next->next->next = new ListNode(2);
    node->next->next->next->next = new ListNode(3);
    node->next->next->next->next->next = new ListNode(3);

    ListNode* otherNode = new ListNode(1, new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(3, new ListNode(4, new ListNode( 5, new ListNode(5, new ListNode(6, new ListNode(6)))))))))));

    cout << "Original List: ";
    ListNode* temp = otherNode;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;

    ListNode* new_node = Remove_Dup_From_List::deleteDuplicates(otherNode);

    cout << "Modified List: ";
    temp = new_node;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
