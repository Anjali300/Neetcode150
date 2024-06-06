/*

DLL: Swap First and Last ( ** Interview Question)
Implement a member function called swapFirstLast() that swaps the values of the first and last nodes in the list.

If the length of the list is less than 2, the function should not perform any operation.

Input:
The function is a member of the DoublyLinkedList class, which has a head and a tail pointer, as well as a length attribute.



Output:
No explicit output is returned. However, the function should modify the doubly linked list such that the values of the first and last nodes are swapped.

*/

Logic :
                                               
        //   | - Check if the list has less than 2 nodes. If so,   |
        //   |   just return; nothing to swap.                     |
        //   | - Use a temporary variable to store the value of    |
        //   |   the head node.                                    |
        //   | - Assign the value of the tail node to the head     |
        //   |   node.                                             |
        //   | - Assign the stored head node value to the tail.    |
        //   | - Check output from Test.cpp in "User logs".


Code 

void swapFirstLast(){
            if(length<2)return;
            int temp = head->value;
        head->value = tail->value;
        tail->value = temp;
        }
