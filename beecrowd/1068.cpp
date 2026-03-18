#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;

    while(getline(cin, S)){
        int cont=0;
        for(int i=0; i<S.size(); i++){
            if(S[i]=='(') cont++;
            else if(S[i]==')') cont--;
            if(cont<0) break;
        }
        if(cont<0 || cont>0) cout<<"incorrect"<<endl;
        else cout<<"correct"<<endl;
    }

    return 0;
}