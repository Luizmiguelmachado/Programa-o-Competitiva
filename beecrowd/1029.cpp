#include <iostream>
#include <vector>

using namespace std;

int fib(int F, int &cont){
    if(F==0) return 0;
    if(F==1) return 1;
    cont+=2;
    return fib(F-1, cont)+fib(F-2, cont);
}

int main() {
 
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int F;
        cin>>F;
        int cont=0;
        int result=fib(F, cont);
        cout<<"fib("<<F<<") = "<<cont<<" calls = "<<result<<endl;
    }
 
    return 0;
}
