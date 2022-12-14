/*
Solve the problem [C++]
Given an array of integers arr that contains n+1 elements between 1 and n inclusive, create a function that returns the duplicate element (the element that appears more than once). Assume that:
- There is only one duplicate number
- The duplicate number can be repeated more than once

Example 1:
Input: arr = [4, 2, 1, 3, 1]
Output: 1
Example 2:
Input: arr = [1, 4, 2, 2, 5, 2]
Output: 2

*/

#include <iostream>
#include <unordered_set>

// Function to find the duplicate element in an array of integers
int findDuplicate(int arr[], int n)
{
    // create an unordered set
    std::unordered_set<int> set;

    // loop over the array
    for (int i = 0; i < n; i++)
    {
        // if the element is not in the set, insert it
        if (set.find(arr[i]) == set.end())
            set.insert(arr[i]);

        // if the element is already in the set, return it
        else
            return arr[i];
    }

    // if no duplicate is found, return 0
    return 0;
}

// main function
int main()
{
    // array of integers
    int arr[] = { 4, 2, 1, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // print the duplicate element
    std::cout << "The duplicate element is: " << findDuplicate(arr, n) << std::endl;

    return 0;
}
