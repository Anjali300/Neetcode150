/*

Remove Duplicates ( ** Interview Question)
Implement the removeDuplicates member function for the LinkedList class, which removes all duplicate values from a singly linked list.

The function should preserve the original order of the non-duplicate elements.
*/


Tips:                                                |
        //   | - Use two pointers: 'current' and 'runner'           |
        //   | - 'current' scans each node                          |
        //   | - 'runner' checks for duplicates ahead               |
        //   | - If duplicate found, delete it                      |
        //   | - Update 'next' pointers and reduce length           |
        //   | - No return value, list updated in-place     


Code :

void removeDuplicates(){
            Node* current = head;
            while(current!=nullptr){
                Node* runner = current;
                while(runner->next!=nullptr){
                  if (runner->next->value == current->value) {
                    Node* duplicate = runner->next;
                    runner->next = runner->next->next;
                    delete duplicate;
                    length--;
                } else {
                    runner = runner->next;
                }
            }
            current = current->next;
        }
    }
