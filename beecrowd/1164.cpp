#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    while(N--){
        int num;
        cin>>num;
        int soma=0;
        for(int i=1; i<num; i++){
            if(num%i==0) soma+=i;
        }
        if(soma==num) cout<<num<<" eh perfeito"<<endl;
        else cout<<num<<" nao eh perfeito"<<endl;
    }
}