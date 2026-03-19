#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int num1, num2;
        cin>>num1>>num2;
        
        int soma=0;
        for(int i=num1; i<num1+(num2*2); i++){
            if(i%2!=0){
                soma+=i;
            }
        }
        cout<<soma<<endl;   
    }
}