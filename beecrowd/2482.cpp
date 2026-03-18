#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin>>N;
cin.ignore();
    map<string, string> m;
    for(int i=0; i<N; i++){
        string lingua, traducao;
        getline(cin, lingua);
        getline(cin, traducao);
        m[lingua] = traducao;
    }
    int B;
    cin>>B;
    cin.ignore();
    for(int i=0; i<B; i++){
        string nome, lingua;
        getline(cin, nome);
        getline(cin, lingua);
        cout<<nome<<endl<<m[lingua]<<endl;
        cout<<endl;
    }

    return 0;
}