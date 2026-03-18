#include <iostream>
#include <vector>

using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int L;
        cin>>L;
        vector<int>V(L);
        for(int g=0; g<L; g++){
            cin>>V[g];
        }
        int cont=0, num=0;
        while(num<L){
            int g=0, aux;
            for(int j=1; j<L; j++){
                if(V[g]>V[j]){
                    aux=V[g];
                    V[g]=V[j];
                    V[j]=aux;
                    cont++;
                }
                g++;
            }
            num++;
        }
        cout<<"Optimal train swapping takes "<<cont<<" swaps."<<endl;
    }
 
    return 0;
}