#include <iostream>

using namespace std;

int main(){
    int cont=0;
    for(int i=0; i<6; i++){
        double num;
        cin>>num;
        if(num>0) cont++;
    }
    cout<<cont<<" valores positivos"<<endl;
}