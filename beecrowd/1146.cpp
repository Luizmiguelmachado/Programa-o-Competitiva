#include <iostream>

using namespace std;

int main(){
    int N=1;
    while(N!=0){
        cin>>N;
        for(int i=1; i<=N; i++){
            if(i==N) cout<<i<<endl;
            else cout<<i<<" ";
        }
    }
}