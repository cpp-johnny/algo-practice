/*

Solve the problem [C++]
Given an array of integers arr, create a function that returns an array containing the values of arr without duplicates (the order doesn't matter).
Example 1:
Input: arr = [4, 2, 5, 3, 3, 1, 2, 4, 1, 5, 5, 5, 3, 1]
Output: [4, 2, 5, 3, 1]
Example 2:
Input: arr = [1, 1, 1, 1, 1, 1, 1, 1]
Output: [1]
Example 3:
Input: arr = [4, 4, 2, 3, 2, 2, 4, 3]
Output: [4, 2, 3]

*/

#include <iostream>
#include <unordered_set>
#include <vector>

// Function to find the unique elements in an array of integers
std::vector<int> findUnique(int arr[], int n)
{
    // create an unordered set
    std::unordered_set<int> set;

    // loop over the array and insert the elements in the set
    for (int i = 0; i < n; i++)
        set.insert(arr[i]);

    // return the vector containing the unique elements
    return std::vector<int>(set.begin(), set.end());
}

// main function
int main()
{
    // array of integers
    int arr[] = { 4, 2, 5, 3, 3, 1, 2, 4, 1, 5, 5, 5, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // print the unique elements
    std::vector<int> unique = findUnique(arr, n);
    std::cout << "array containing the values of arr without duplicate: ";
    for (int i = 0; i < unique.size(); i++)
        std::cout << unique[i] << " ";
    std::cout << std::endl;

    return 0;
}
