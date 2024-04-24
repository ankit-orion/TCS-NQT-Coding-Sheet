#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    m[1] = 12;
    m[2] = 14;
    m[3] = 16;
    m[4] = 18;
    m.insert({5, 20});
    m.insert({6, 22});
    map<int, int> ::iterator it;
    for(it = m.begin(); it!= m.end(); it++){
        cout << it->first <<"->" << it->second;
        if(it != --m.end()){
            cout << ", ";
        }
    }

    cout << "\nAfter adding 2 to the values\n";
    for(auto x:m){
        x.second += 2;
    }
    
    cout << "\nAfter doubling the values\n";
    for(auto &x:m){
        // the difference between auto x:m and auto &x:m is that in the former case, x is a copy of the element in the map, so changing x will not change the element in the map, but in the latter case, x is a reference to the element in the map, so changing x will change the element in the map.
        x.second *= 2;
    }
    for(auto &x:m){
        cout << x.first <<"->" << x.second;
        if(&x != &(*m.rbegin())){
            cout << ", ";
        }
    }
    return 0;
}