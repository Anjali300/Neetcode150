/*

Swap Pairs 

Implement a member function called swapPairs() that swaps the values of every two adjacent nodes in the list.

Note: This DoublyLinkedList does not have a tail pointer which will make the implementation easier.



Input:
The function is a member of the DoublyLinkedList class, which has a head and a tail pointer, as well as a length attribute.



Output:
No explicit output is returned. However, the function should modify the doubly linked list such that the values of every two adjacent nodes are swapped.

*/

Logic : 

                                             |
        //   | - Utilizes a dummyNode to simplify edge cases.      |
        //   | - Uses pointers to navigate and swap nodes.         |
        //   | - Pay close attention to the 'next' and 'prev'      |
        //   |   pointers of the nodes.                            |
        //   | - Works in-place; doesn't create new nodes.         |
        //   | - Always checks if the list is empty or has only    |
        //   |   one node.                                         |
        //   | - Check output from Test.cpp in "User logs". 


Code :

void swapPairs() {
        if (!head || !head->next) return;

        Node* current = head;
        while (current && current->next) {
            Node* first = current;
            Node* second = current->next;

            int temp = first->value;
            first->value = second->value;
            second->value = temp;

            current = second->next;
        }
    }
