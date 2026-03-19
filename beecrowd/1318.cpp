#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M;
    while(cin>>N>>M && (N!=0 || M!=0)){
        vector<int> contagem(N+1, 0);
        int num, duplicados=0;
        for(int i=0; i<M; i++){
            cin>>num;
            
            if(num <= N) contagem[num]++;
        }
        
        for(int i=1; i<=N; i++){
            if(contagem[i]>1){
                duplicados++;
            }
        }
        cout<<duplicados<<endl;
    }
    return 0;
}