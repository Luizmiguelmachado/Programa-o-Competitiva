#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num1, num2;
    cin>>num1>>num2;
    int A = max(num1, num2);
    int B = min(num1, num2);
    int soma=0;
    for(int i=B+1; i<A; i++){
        if(i%2!=0){
            soma+=i;
        }
    }
    cout<<soma<<endl;
}