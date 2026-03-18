#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<double> V;  
    double maior = 0.0, menor = 11.0;
    int idm, idM;

    for(int i=0; i<5; i++){
        double N;
        cin>>N;
        if(N>maior){
            maior=N;
            idM=i;
        }
        if(N<menor){
            menor=N;
            idm=i;
        }
        V.push_back(N);
    }
    
    double soma=0.0;
    for(int i=0; i<V.size(); i++){
        if(i!=idm && i!=idM) soma+=V[i];
    }
    printf("%.1f\n", soma);
    
    return 0;
}