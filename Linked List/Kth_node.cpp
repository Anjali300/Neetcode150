/*

LL: Find Kth Node From End ( ** Interview Question)
Implement the findKthFromEnd member function for the LinkedList class, which returns the k-th node from the end of the linked list WITHOUT USING THE LENGTH of the list.

If the value of k is greater than the length of the list, the function should return nullptr.

*/

Node* findKthFromEnd(int k){
            if (k <= 0 || !head) return nullptr;
            Node* slow = head;
            Node* fast = head;
            for(int i=0;i<k;i++){
                if(!fast){
                    return nullptr;
                } 
                fast= fast->next;
                
            }
            
            while(fast){
                slow = slow->next;
                fast = fast->next;
            }
            
            return slow;
        }
