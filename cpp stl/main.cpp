#include<bits/stdc++.h>
using namespace std;
int main(){
    //! pairs 
    // pair<int, int>p = { 1, 3 };
    // cout << p.first << " "<< p.second << endl;
    
    // // pair of pairs
    // pair<int, pair<int, int>>pp = { 2, {8, 9}};
    // cout << pp.first <<" " << pp.second.first << " "<<pp.second.second << endl; 

    // // array of pairs
    // pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} };
    // for(int i = 0; i < 3; i++){
    //     cout << i<<"th Position " << arr[i].first << " "<< arr[i].second << endl;
    // }

    //! vector 
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2); // emplace_back is faster than push_back because it directly constructs the element in the vector
    vector<int>v1(5, 10); // vector of size 5 with all elements as 10   
    vector<int>v2(5); // vector of size 5 with all elements as 0 or garbage value
    vector<int>v3 = {1, 2, 3, 4, 5}; 
    vector<int>v4(v3);// vector of size 5 with elements 1, 2, 3, 4, 5

    // traversing in the vector
    cout << "Learning iteratots in vector" << endl;
    for(auto it = v3.begin(); it!=v3.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    for(auto it: v3){
        cout << it << " ";
    }
    // the above two loops are same but the second one is more readable and easy to write
    // here we are not writing *it because it is a pointer and we are using auto to automatically detect the type of it
    
    // deletion in vector
    v3.erase(v2.begin() + 1); // erasing the element at 1st position    
    v3.erase(v2.begin() + 1, v2.begin() + 3); // erasing the elements from 1st position to 3rd position 

    // insert in vector
    v3.insert(v3.begin() + 1, 10); // inserting 10 at 1st position
    v3.insert(v3.begin() + 1, 3, 10); // inserting 10, 10, 10 at 1st position   
    v3.insert(v3.begin() + 1, v2.begin(), v2.end()); // inserting the elements of v2 from 1st position  

    // size of vector
    cout << v3.size() << endl;

    // capacity of vector
    cout << v3.capacity() << endl;

    // clear the vector 
    v3.clear();

    // check if the vector is empty or not
    cout << v3.empty() << endl;

    // resize the vector
    v3.resize(10); // size of vector will be 10 and all elements will be 0

    // set stores every element in sorted manner and all the elements are unique
    
    return 0;
}