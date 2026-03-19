#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    int X[N];
    for(int i=0; i<N; i++){
        cin>>X[i];
    }
    int menor=X[0];
    int cord;
    for(int i=0; i<N; i++){
        if(X[i]<menor){
            menor=X[i];
            cord=i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl<<"Posicao: "<<cord<<endl;
    return 0;
}