/*

Binary to Decimal ( ** Interview Question)
Objective:

You have a linked list where each node represents a binary digit (0 or 1). 
The goal of the binaryToDecimal function is to convert this binary number, represented by the linked list, into its decimal equivalent.
  */

Tips:                                                |
        //   | - Use a single pointer: 'current'                    |
        //   | - Initialize an integer 'num' to 0                   |
        //   | - Loop through the list                              |
        //   | - Use the formula: num = num * 2 + current->value    |
        //   | - Return 'num' as the decimal value         


Code :

int binaryToDecimal(){
            Node* curr = head;
            int num =0;
            while(curr!=nullptr){
                num = num*2+curr->value;
                curr = curr->next;
            }
            return num;
        }
