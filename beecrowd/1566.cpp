#include <iostream>
#include <vector>
#include <algorithm> 
 
using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    vector<vector<int>>outro(N);
    for(int i=0; i<N; i++){
        int tamanho;
        cin>>tamanho;
        vector<int>V(tamanho);

        for(int g=0; g<tamanho; g++){
            cin>>V[g];
        }
        sort(V.begin(), V.end());
        for(int g=0; g<tamanho; g++){
            outro[i].push_back(V[g]);
        }
    }
    for(int i=0; i<N; i++){
        for(int g=0; g<outro[i].size(); g++){
            cout<<outro[i][g];
            if(g<outro[i].size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}