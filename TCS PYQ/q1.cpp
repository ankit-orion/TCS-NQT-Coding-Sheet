// Q1. Given a non-negative integer array Arr having size N. Each element of the array will carry a different 
// value. This means no two elements can have the same values.The candidate has to do this with minimal 
// changes in the original value of the elements, making every element as least as much value as it originally 
// had. 
// Find the minimum sum of all elements that can be set the array for:
// Example 1:
// Input
// 3 -> Value of N, represents size of Arr
// 2 -> Value of Arr[0]
// 2-> Value of Arr[1]
// 4-> Value of Arr[2]
// Output
// 9
// Explanation:
// As two elements have the same value, max value for the one of them needs to be incremented to 3.
// He can set the array with 2+3+4=9
// Example 2:
// Input
// 2 -> Value of N, represents size of Arr
// 3 -> Value of Arr[0]
// 4-> Value of Arr[1]
// 5-> Value of Arr[2]
// Output
// Wrong Input 
// Explanation:
// Here N=2, so we need to provide value of only two elements but we are providing value of three elements 
// so result is “Wrong Input