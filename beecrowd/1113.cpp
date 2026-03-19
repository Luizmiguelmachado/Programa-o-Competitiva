#include <iostream>

using namespace std;

int main(){
    int X=1, Y=0;
    while(X!=Y){
        cin>>X>>Y;
        if(X<Y) cout<<"Crescente"<<endl;
        if(X>Y) cout<<"Decrescente"<<endl;
    }
}