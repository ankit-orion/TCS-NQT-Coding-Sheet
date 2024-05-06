// a zoo consists of two types of animals with different numbers of legs 
// the zoo management want to find out how many types of animals are there in the zoo with each category


// a) N represents the total number of animals 
// b) L represents the total number of legs

// Find out the number of animals of each category 
 
// Input: N = 200
// L = 540

// Output:
// TL 130
// FL 70
#include <iostream>
using namespace std;
int main(){
    int N, L;
    cin >> N >> L;
    int TL = 0, FL = 0;
    for(int i = 0; i <= N; i++){
        if(4*i + 2*(N-i) == L){
            TL = i;
            FL = N-i;
            break;
        }
    }
    cout << "TL " << TL << endl;
    cout << "FL " << FL << endl;
    return 0;
}
