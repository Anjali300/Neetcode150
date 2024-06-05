/*

LL: Has Loop ( ** Interview Question)
Implement a function called hasLoop to detect if a given singly-linked list contains a loop (a cycle) or not.

The function should return true if a loop is detected in the linked list, and false otherwise.

*/

logic -

   Tips:                                                |
        //   | - Use two pointers: 'slow' and 'fast'                |
        //   | - 'slow' moves one step, 'fast' moves two            |
        //   | - If they meet, a loop exists                        |
        //   | - Return true if loop found, false otherwise         |
        //   | - 'fast' checks for null and its 'next' for null 

bool hasLoop(){
            Node* slow = head;
            Node* fast = head;
            while(fast!= nullptr && fast-> next != nullptr)
            {
                slow = slow-> next;
                fast = fast->next->next;
                if(slow==fast)
                {
                    return true;
                }
            }
            return false;
        }
