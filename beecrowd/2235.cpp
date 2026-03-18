#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin>>A>>B>>C;
    
    if (A == B || A == C || B == C || A + B == C || A + C == B || B + C == A || A + B + C == 0 || A + B - C == 0 || A + C - B == 0 || B + C - A == 0) {
        cout<<"S"<<endl;
    } else{
        cout<<"N"<<endl;
    }
    
    return 0;
}