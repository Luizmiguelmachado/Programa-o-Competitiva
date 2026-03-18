#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int N;
    
    while(cin>>N && N!=0){
        queue<int> F;
        vector<int> V;
        
        for(int i=1; i<=N; i++){
            F.push(i);
        }
        while(!F.empty()){
            V.push_back(F.front());
            F.pop();
            F.push(F.front());
            F.pop();
        }
        cout<<"Discarded cards: ";
        for(int i=0; i<V.size()-1; i++){
            if(i==V.size()-2) cout<<V[i];
            else cout<<V[i]<<", ";
        }
        cout<<endl<<"Remaining card: "<<V[V.size()-1]<<endl;
    }
    

    return 0;
}