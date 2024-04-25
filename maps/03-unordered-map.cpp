#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int>m;
    // m[1] = 2;
    // m[2] = 3;
    // m[3] = 4;
    // m[4] = 5;
    // m[5] = 6;
    // m[6] = 3;
    // m[7] = 4;
    // m[8] = 5;
    // m[9] = 6;
    // m[10] = 11;
    // m.insert({5, 6});
    // for(auto it:m){
    //     cout << it.first << " " << it.second << endl;
    // }
    // printing the frequency of the elements
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    for (auto it: m)
    {
        /* code */
        cout << it.first << " " << it.second << endl;
    }
    
    return 0;
}
//Notes:
// unordered_map is a type of map in c++ which is used to store key value pairs
// it uses hash table to store the elements
// it is faster than the map in terms of searching and inserting elements
// it is used when we don't need to store the elements in a sorted order
// some classic problem that can be solved using unordered_map are:
// 1. finding the unique element in the array
// 2. finding the element with maximum count
// 3. finding the element with minimum count
// 4. finding the element with maximum frequency
// 5. finding the element with minimum frequency
// 6. finding the element with maximum sum of indices
// 7. finding the element with minimum sum of indices
// 8. finding the element with maximum product of indices
// 9. finding the element with minimum product of indices
// 10. finding the element with maximum sum of values
// etc.
// time complexity of unordered_map is O(1) for searching and inserting elements
// space complexity of unordered_map is O(n) where n is the number of elements in the map
// unordered_map is used when we don't need to store the elements in a sorted order