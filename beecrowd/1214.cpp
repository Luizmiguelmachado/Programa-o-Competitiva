#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
       int quant;
       cin>>quant;
       vector<int> V(quant);
       int soma=0;
       for(int g=0; g<quant; g++){
           cin>>V[g];
           soma+=V[g];
       }
       float media=soma/quant;
       float acima=0;
       for(int g=0; g<quant; g++){
           if(V[g]>media) acima++;
       }
       cout<<fixed<<setprecision(3);
       cout<<acima*100/quant<<"%"<<endl;
    }
    return 0;
}