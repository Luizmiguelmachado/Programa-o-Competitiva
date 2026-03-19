#include <iostream>

using namespace std;

int main(){
    int N=1;
    while(cin>>N && N!=0){
        int soma=0;
        for(int i=N; i<N+10; i++){
            if(i%2==0) soma+=i;
        }
        cout<<soma<<endl;
    }
}