/* 
DLL: Palindrome Checker ( ** Interview Question)
Implement a member function called isPalindrome() that checks if the list is a palindrome, i.e., its elements read the same forward and backward.



Input:
The function is a member of the DoublyLinkedList class, which has a head and a tail pointer, as well as
a length attribute.



Output:
The function should return a boolean value indicating whether the doubly linked list is a palindrome or not.

*/

Tips:                                               |
        //   | - A list with 0 or 1 node is a palindrome.          |
        //   | - Create two pointers: forwardNode and backwardNode.|
        //   | - Loop from the start to the middle of the list.    |
        //   | - Compare forwardNode and backwardNode values.      |
        //   | - If any pair is not equal, return false.           |
        //   | - Otherwise, return true.                           |


Code :

bool isPalindrome(){
            if(length==0 || length==1) return true;
            Node* forwardNode = head;
            Node* backwardNode = tail;
            for (int i = 0; i < length / 2; ++i){
                if(forwardNode-> value != backwardNode->value){
                    return false;
                }
            }
            return true;
        }
