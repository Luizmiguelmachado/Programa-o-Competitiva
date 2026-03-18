#include <iostream>
#include <vector>
#include <algorithm> 
#include <functional>

using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        int M;
        cin>>M;
        vector<int>V(M);
        vector<int>outro(M);
        for(int g=0; g<M; g++){
            cin>>V[g];
            outro[g]=V[g];
        }
        int maior, verificador;
        sort(V.begin(), V.end(), greater<int>());
        int cont=0;
        for(int g=0; g<M; g++){
            if(V[g]==outro[g])
                cont++;
        }
        cout<<cont<<endl;
    }
 
    return 0;
}