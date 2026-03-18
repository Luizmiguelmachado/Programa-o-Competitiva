#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string P, aux;
    queue<string> N, S, L, O;
    
    while(cin>>P && P!="0"){
        if(P[0]=='-') aux=P;
        
        else if(aux=="-4") L.push(P);
        else if(aux=="-3") N.push(P);
        else if(aux=="-2") S.push(P);
        else if(aux=="-1") O.push(P);
    }
    
    
    while(!N.empty() || !S.empty() || !L.empty() || !O.empty()){
        if(!O.empty()){
            cout<<O.front();
            O.pop();
            if(!N.empty() || !S.empty() || !L.empty() || !O.empty()){
                cout<<" ";
            }
        }
        if(!N.empty()){
            cout<<N.front();
            N.pop();
            if(!N.empty() || !S.empty() || !L.empty() || !O.empty()){
                cout<<" ";
            }
        }
        if(!S.empty()){
            cout<<S.front();
            S.pop();
            if(!N.empty() || !S.empty() || !L.empty() || !O.empty()){
                cout<<" ";
            }
        }
        if(!L.empty()){
            cout<<L.front();
            L.pop();
            if(!N.empty() || !S.empty() || !L.empty() || !O.empty()){
                cout<<" ";
            }
        }
    }
    cout<<endl;

    return 0;
}