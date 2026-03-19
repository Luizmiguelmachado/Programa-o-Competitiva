#include <bits/stdc++.h>

using namespace std;

int main(){
    int P[5], I[5];
    int tamP=0, tamI=0;
    for(int i=0; i<15; i++){
        if(tamI==5){
            for(int j=0; j<5; j++) cout<<"impar["<<j<<"] = "<<I[j]<<endl;
            tamI=0;
        }
        if(tamP==5){
            for(int j=0; j<5; j++) cout<<"par["<<j<<"] = "<<P[j]<<endl;
            tamP=0;
        }
        int num;
        cin>>num;

        if(num%2==0){
            P[tamP]=num;
            tamP++;
        }
        else{
            I[tamI]=num;
            tamI++;
        }
    }
    for(int i=0; i<tamI; i++) cout<<"impar["<<i<<"] = "<<I[i]<<endl;
    for(int i=0; i<tamP; i++)   cout<<"par["<<i<<"] = "<<P[i]<<endl;
    return 0;
}