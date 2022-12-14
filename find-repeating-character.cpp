/*
 
Solve the problem [C++]
Given a string str, create a function that returns the first repeating character.
If such a character doesn't exist, return the null character '\0'.
Example 1:
Input: str = "inside code"
Output: 'i'
Example 2:
Input: str = "programming"
Output: 'r'
Example 3:
Input: str = "abcd"
Output: '\0'
Example 4:
Input: str = "abba"
Output: 'b'

*/

#include <iostream>
#include <unordered_set>

using namespace std;

// This function returns the first repeating character in a string,
// or '\0' if no repeating character is found.
char find_first_repeating_char(const string& str) {
    // Create an unordered set to keep track of characters we've seen
    unordered_set<char> seen;

    // Loop through the string and check if each character has been seen before.
    // If it has, return the character.
    // If it hasn't, add it to the set of seen characters.
    for (const char& c : str) {
        if (seen.count(c) > 0) {
            return c;
        }
        seen.insert(c);
    }

    // If we get here, no repeating character was found, so return '\0'.
    return '\0';
}

int main() {
    cout << find_first_repeating_char("abba") << endl;
    cout << find_first_repeating_char("abcdefghijklmnopqrstuvwxyz") << endl;
    
    return 0;
}
