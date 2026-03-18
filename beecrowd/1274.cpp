#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    
    while(cin >> N, N){
        vector<int> net(N+1);
        stack<int> caminho;
        map<int, int> sd;
        set<int> endpoints;
        bool possivel = true;
        
        for(int i = 1; i <= N; i++){
            int aux;
            cin >> aux;

            if(!endpoints.insert(aux).second){
                possivel = false;
            }

            net[i] = i;
            sd[i] = aux;
        }

        if(!possivel){
            cout << "No solution" << endl;
        } else {
            for(int i = 1; i <= N; i++){
                if(net[i] != sd[i]){
                    for(int j = i+1; j <= N; j++){
                        if(net[j] == sd[i]){
                            while(net[i]!=sd[i]){
                                caminho.push(j-1);
                                int aux = net[j-1];
                                net[j-1]=net[j];
                                net[j]=aux;
                                j--;
                            }
                            break;
                        }
                    }
                }
            }

            cout<<caminho.size();
            if(caminho.size())  cout<<' ';
            
            while(!caminho.empty()){
                int a = caminho.top();
                cout<<a;
                caminho.pop();
                
                if(caminho.size()){
                    cout<<' ';
                }
            }
            cout<<endl;
        }
    }

    return 0;
}