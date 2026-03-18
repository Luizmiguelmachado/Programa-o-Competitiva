#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, M;
    cin>>N>>M;
    int v[M];
    for(int i=0; i<M; i++){
       cin>>v[i]; 
    }
    for(int i=0; i<M; i++){
        for(int g=i; g<M; g++){
            if(i!=g){
                if(v[g]!=0 && v[g]!=0){
                    if(v[i]==v[g])
                        v[g]=0;
                }
            }
        }
    }
    int cont=0;
    for(int i=0; i<M; i++){
        if(v[i]!=0){
           cont++; 
        }
    }
    cont=N-cont;
    cout<<cont<<endl;
    
 
    return 0;
}