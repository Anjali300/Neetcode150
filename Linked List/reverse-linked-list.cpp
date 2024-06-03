/*
Reverse a Linked List

Given the beginning of a singly linked list head, reverse the list, and return the new beginning of the list.

*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(head == nullptr) return nullptr; 
       if(head->next == nullptr) return head;
       ListNode* temp = head;
       ListNode* before = nullptr;
       ListNode* after = temp->next;
       while(temp){
        after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
       }
       return before;
    }
};
