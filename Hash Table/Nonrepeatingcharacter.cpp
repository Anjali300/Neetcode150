/*

First Non-Repeating Character ( ** Interview Question)
Implement a function called firstNonRepeatingChar() that finds and returns the first non-repeating character in a given string.



Input:
The function takes a constant reference to a string input_string.



Output:
The function should return a character which is the first non-repeating character in the input string.
If no non-repeating character is found, the function should return a null character ('\0').

*/

char firstNonRepeatingChar(const string& input_string) {
    unordered_map<char,int> myMap;
    for(char elem : input_string){
        myMap[elem]++;
    }
    
    for (char ch : input_string) {
        if (myMap[ch] == 1) {
            return ch;
        }
    }
    return '\0';
}
