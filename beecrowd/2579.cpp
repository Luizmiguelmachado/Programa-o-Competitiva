#include <iostream>
#include <string>

using namespace std;

int main()
{
    int L, C, X, Y;
    cin>>L>>C>>X>>Y;
    if(C%2!=0){
        if(X%2==0){
            if(Y%2==0)  cout<<"Direita"<<endl;
            else cout<<"Esquerda"<<endl;
        }
        else{
            if(Y%2==0)  cout<<"Esquerda"<<endl;
            else cout<<"Direita"<<endl;
        }
    }
    else{
            if(Y%2==0)  cout<<"Direita"<<endl;
            else cout<<"Esquerda"<<endl;
        
    }
    return 0;
}