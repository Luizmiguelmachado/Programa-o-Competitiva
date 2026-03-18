#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    
    double T[3]={0}, A[3]={0};
    for(int j=0; j<N; j++){
        string nome;
        cin.ignore();
        cin>>nome;
        for(int i=0; i<3; i++){
            int num;
            cin>>num;
            T[i]+=num;
        }
        for(int i=0; i<3; i++){
            int num;
            cin>>num;
            A[i]+=num;
        }
    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Pontos de Saque: "<<(A[0]*100)/T[0]<<" %."<<endl;
    cout<<"Pontos de Bloqueio: "<<(A[1]*100)/T[1]<<" %."<<endl;
    cout<<"Pontos de Ataque: "<<(A[2]*100)/T[2]<<" %."<<endl;
    return 0;
}