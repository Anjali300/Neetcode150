/*

Merge Two Sorted Linked Lists

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted linked list and return the head of the new sorted linked list.

The new list should be made up of nodes from list1 and list2.

*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1 == nullptr && list2 == nullptr) return nullptr;
       if(list1 == nullptr) return list2;
       if(list2 == nullptr) return list1;
       if(list1->val <= list2->val){          /// Compare the value of the first two nodes and make the node with the smaller value the head node of the merged linked list.
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
       } else {
        list2->next = mergeTwoLists(list1,list2->next);
        return list2;
       }
    }
};
