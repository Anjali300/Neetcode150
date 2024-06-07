/*

Remove Node From End of Linked List
You are given the beginning of a linked list head, and an integer n.

Remove the nth node from the end of the list and return the beginning of the list.

*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr || head->next==nullptr) return nullptr;
        ListNode* start = head;
        ListNode* end = head;
        for(int i=0;i<n;i++){
            end=end->next;
        }
        if(end==nullptr){
            return head->next;
        }
        while(end->next){
            start = start->next;
            end = end->next;
        }
        ListNode* temp = start->next;
        start->next = temp->next;
        delete temp;
        return head;
    }
};
