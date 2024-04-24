#include<bits/stdc++.h>
using namespace std;
int main(){
   multimap<int, int> m;
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
        m.insert({x, i});
    }
    for (auto it: m)
    {
        /* code */
        cout << it.first << " " << it.second << endl;
    }
    
    return 0;
}