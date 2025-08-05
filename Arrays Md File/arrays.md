# 📂 Array Questions – TCS NQT Preparation

---

## Q 1. Find the Smallest Element in an Array

### 🧩 Problem Description
You're given an array of integers. Your task is to identify and return the smallest element in the array.

---

### 🧪 Examples

**Example 1:**  
Input: `arr = [2, 5, 1, 3, 0]`  
Output: `0`  
_Explanation:_ The smallest number in the array is `0`.

---

### 💡 Approach: Sorting

**Concept:**  
By sorting the array in ascending order, the first element (at index 0) becomes the smallest.

**Steps:**
1. Sort the array in ascending order.
2. Return the element at the first index.

---

### 💻 Code Solutions

<details>
<summary>🔷 C++ Code</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum element
int findMinElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // Sort the array
    return nums[0];                  // First element is the smallest
}

int main() {
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    cout << "Smallest element in arr1: " << findMinElement(arr1) << endl;
    cout << "Smallest element in arr2: " << findMinElement(arr2) << endl;

    return 0;
} 
```

</details> <details> <summary>☕ Java Code</summary>

```Java
import java.util.Arrays;

public class Main {
    // Function to return the smallest element
    static int findMinElement(int[] arr) {
        Arrays.sort(arr);  // Sort the array
        return arr[0];     // First element is the minimum
    }

    public static void main(String[] args) {
        int[] arr1 = {2, 5, 1, 3, 0};
        int[] arr2 = {8, 10, 5, 7, 9};

        System.out.println("Smallest element in arr1: " + findMinElement(arr1));
        System.out.println("Smallest element in arr2: " + findMinElement(arr2));
    }
}
```

</details> <details> <summary>🐍 Python Code</summary>

```Python
def find_min_element(arr):
    arr.sort()  # Sort the array
    return arr[0]  # Return the first (smallest) element
```

# Example usage
arr1 = [2, 5, 1, 3, 0]
arr2 = [8, 10, 5, 7, 9]

print("Smallest element in arr1:", find_min_element(arr1))
print("Smallest element in arr2:", find_min_element(arr2))

</details>

## Q 2. Find the Largest Element in an Array

### 🧩 Problem Description
You're given an array of integers. Your task is to find and return the largest (maximum) element present in the array.

---

### 🧪 Examples

**Example 1:**  
Input: `arr = [2, 5, 1, 3, 0]`  
Output: `5`  
_Explanation:_ The largest number in the array is `5`.

**Example 2:**  
Input: `arr = [8, 10, 5, 7, 9]`  
Output: `10`  
_Explanation:_ The maximum element present is `10`.

---

### 💡 Approach 1: Sorting

**Concept:**  
Sort the array in ascending order. The last element (at index `n-1`) will be the largest.

**Steps:**
1. Sort the array.
2. Return the last element (`arr[n-1]`).

---

### 💻 Code Solutions (Using Sorting)

<details><summary>🔷 C++ Code</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

// Function to return the largest element after sorting
int findMaxSorted(vector<int>& arr) {
    sort(arr.begin(), arr.end());  // Sort in ascending order
    return arr[arr.size() - 1];    // Last element is the largest
}

int main() {
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    cout << "The largest element in arr1: " << findMaxSorted(arr1) << endl;
    cout << "The largest element in arr2: " << findMaxSorted(arr2) << endl;

    return 0;
}
```
</details><details><summary>☕ Java Code</summary>

```Java
import java.util.Arrays;

public class Main {
    // Returns the maximum element using sorting
    static int findMaxSorted(int[] arr) {
        Arrays.sort(arr);
        return arr[arr.length - 1];  // Last element
    }

    public static void main(String[] args) {
        int[] arr1 = {2, 5, 1, 3, 0};
        int[] arr2 = {8, 10, 5, 7, 9};

        System.out.println("The largest element in arr1: " + findMaxSorted(arr1));
        System.out.println("The largest element in arr2: " + findMaxSorted(arr2));
    }
}
```
</details>

<details><summary>🐍 Python Code</summary>

```Python
def find_max_sorted(arr):
    arr.sort()  # Sort the array in ascending order
    return arr[-1]  # Return the last element
```
</details>

### 💡 Approach 2: Linear Scan (Optimal)
Concept:
Maintain a variable max_val initialized with the first element, and iterate through the array updating it when a larger element is found.

Steps:

Set max_val = arr[0]

Traverse the array and update max_val when arr[i] > max_val

Return max_val

# 💻 Code Solutions (Using Max Variable)
<details><summary>🔷 C++ Code</summary>

```cpp
#include <bits/stdc++.h>
using namespace std;

// Linear scan to find the largest element
int findLargestElement(int arr[], int n) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val)
            max_val = arr[i];
    }
    return max_val;
}

int main() {
    int arr1[] = {2, 5, 1, 3, 0};
    int arr2[] = {8, 10, 5, 7, 9};

    cout << "Largest in arr1: " << findLargestElement(arr1, 5) << endl;
    cout << "Largest in arr2: " << findLargestElement(arr2, 5) << endl;

    return 0;
}
```
</details><details><summary>☕ Java Code</summary>

```java
public class Main {
    // Linear scan to find maximum element
    static int findMax(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }

    public static void main(String[] args) {
        int[] arr1 = {2, 5, 1, 3, 0};
        int[] arr2 = {8, 10, 5, 7, 9};

        System.out.println("Largest in arr1: " + findMax(arr1));
        System.out.println("Largest in arr2: " + findMax(arr2));
    }
}
```

</details>

<details><summary>🐍 Python Code</summary>

```python

def find_max(arr):
    max_val = arr[0]
    for num in arr[1:]:
        if num > max_val:
            max_val = num
    return max_val
```

# Example usage
arr1 = [2, 5, 1, 3, 0]
arr2 = [8, 10, 5, 7, 9]

print("Largest in arr1:", find_max(arr1))
print("Largest in arr2:", find_max(arr2))

📊 Time & Space Complexity (Linear Scan)
Time Complexity: O(N) — Each element visited once

Space Complexity: O(1) — No extra space used

</details>

# Q3. Find Second Smallest and Second Largest Element in an array.

### **Problem Statement** : Given an array, find the **second smallest** and **second largest** element in the array. Print ‘-1’ in the event that either of them doesn’t exist.
---

## 🧠 Examples

### **Example 1:**
Input: `[1,2,4,7,7,5] `

Output: Second Smallest : `2`

Second Largest : 5

Explanation: The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2.
---

## 💡 Brute Force Approach: this approach only works if there are no duplicates.

### 🔍 Intuition  
What do we do to find the largest or the smallest element present in an array? We ideally sort them and the first element would be the smallest of all while the last element would be the largest. Can we find the second-smallest and second-largest using a similar approach?

### 🪜 Approach
1. Sort the array in ascending order

2. The element present at the second index is the second smallest element

3. The element present at the second index from the end is the second largest element

---

## 💻 Code

<details>
<summary><b>🔵 C++</b></summary>

```cpp
#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[],int n)
{
    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;  // edge case when only one element is present in array
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"Second smallest is "<<small<<endl;
    cout<<"Second largest is "<<large<<endl;
}
int main()
{
    int arr[]={1,2,4,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    getElements(arr,n);
    return 0;
}
```
</details>

<details> <summary><b>☕ Java</b></summary>

```Java
import java.io.*;
import java.util.Arrays;
class Test
{
static private void getElements(int[] arr, int n)
{
	if (n == 0 || n==1)
	{
		System.out.print(-1);
		System.out.print(" ");
		System.out.print(-1);
		System.out.print("\n");
	}
	Arrays.sort(arr);
	int small = arr[1];
	int large = arr[n - 2];
	System.out.println("Second smallest is "+small);
	System.out.println("Second largest is "+large);
}
public static void main(String[] args)
{
	int[] arr = {1, 2, 4, 6, 7, 5};
	int n = arr.length;
	getElements(arr, n);
}
}
```

</details>

<details> <summary><b>🐍 Python</b></summary>

```Python
def getElements(arr, n):
    if n == 0 or n == 1:
        print(-1, -1)  # edge case when only one element is present in array
    arr.sort()
    small = arr[1]
    large = arr[n-2]
    print("Second smallest is", small)
    print("Second largest is", large)

if __name__ == '__main__':
    arr = [1, 2, 4, 6, 7, 5]
    n = len(arr)
    getElements(arr, n)

</details>






