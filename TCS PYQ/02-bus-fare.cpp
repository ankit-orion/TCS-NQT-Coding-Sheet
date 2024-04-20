#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string s, d;
    cin >> s >> d;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    transform(d.begin(), d.end(), d.begin(), ::toupper);
    string city[8] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    float arr[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    float res = 0;
    int start = 0, end = 0;
    for(int i = 0; i < 8; i++){
        if(s == city[i]){
            start = i;
        }
        if(d == city[i]){
            end = i;
        }
    }
    if(start == end){
        cout << "INVALID INPUT";
    }
    else{
        if(start < end){
            for(int i = start; i <= end; i++){
                res += arr[i];
            }
        }else{
            for(int i = start; i < 8; i++){
                res += arr[i];
            }
            for(int i = 0; i <= end; i++){
                res += arr[i];
            }
        }
    }
    float fare = ceil(res / 1000.0) * 5;
    cout << fare;
    return 0;
}