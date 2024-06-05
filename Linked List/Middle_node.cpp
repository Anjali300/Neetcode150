/* 

Find Middle Node ( ** Interview Question)

Implement a member function, findMiddleNode(), which finds and returns the middle node of the linked list.

Note: this LinkedList implementation does not have a length member variable.

*/

Logic -

- Use two pointers: 'slow' and 'fast'                |
        //   | - 'slow' moves one step, 'fast' moves two            |
        //   | - When 'fast' reaches the end, 'slow' is at middle   |
        //   | - Return 'slow' as the middle node   


Node* findMiddleNode(){
    if (!head) {
        return nullptr;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
 }
