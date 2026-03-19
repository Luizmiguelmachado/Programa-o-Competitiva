#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
        int num;
        cin>>num;
        int cont=0;
        for(int i=num-1; i>1; i--){
            if(num%i==0) cont++;
        }
        if(cont==0) cout<<num<<" eh primo"<<endl;
        else cout<<num<<" nao eh primo"<<endl;
    }
}