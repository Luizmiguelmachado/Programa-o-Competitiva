#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    while(cin>>A>>B>>C){
        if(A!=B && A!=C) cout<<"A"<<endl;
        if(B!=A && B!=C) cout<<"B"<<endl;
        if(C!=A && C!=B) cout<<"C"<<endl;
        if(A==B && A==C) cout<<"*"<<endl;
    }
    return 0;
}