/*

DLL: Reverse ( ** Interview Question)
Implement a member function called reverse() that reverses the order of the nodes in the list.

Input:
The function is a member of the DoublyLinkedList class, which has a head and a tail pointer, as well as a length attribute.



Output:
No explicit output is returned. However, the function should modify the doubly linked list such that the order of the nodes is reversed.

*/

Tips:                                               |
        //   | - Create two pointers: current and temp.            |
        //   | - Loop through the list swapping next and prev      |
        //   |   for each node.                                    |
        //   | - After loop, swap head and tail pointers.          |
        //   | - Check output from Test.cpp in "User logs". 


Code :

 void reverse(){
           if (length < 2) {
            return;
        }

        Node* current = head;
        Node* temp = nullptr;

        
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev; 
        }

        temp = head;
        head = tail;
        tail = temp;
    }
