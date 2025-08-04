# 📂 Array Questions – TCS NQT Preparation

---

## ✅ 1. Find the Smallest Element in an Array

### 🧩 Problem Description
You're given an array of integers. Your task is to identify and return the smallest element in the array.

---

### 🧪 Examples

**Example 1:**  
Input: `arr = [2, 5, 1, 3, 0]`  
Output: `0`  
_Explanation:_ The smallest number in the array is `0`.

**Example 2:**  
Input: `arr = [8, 10, 5, 7, 9]`  
Output: `5`  
_Explanation:_ The minimum element present is `5`.

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
} ```

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

