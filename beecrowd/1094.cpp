#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int C=0, R=0, S=0;
    for(int i=0; i<N; i++){
        int quantia;
        char tipo;
        cin>>quantia>>tipo;
        if(tipo=='C') C+=quantia;
        if(tipo=='R') R+=quantia;
        if(tipo=='S') S+=quantia;
    }
    cout<<"Total: "<<C+R+S<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<C<<endl;
    cout<<"Total de ratos: "<<R<<endl;
    cout<<"Total de sapos: "<<S<<endl;
    
    cout<<fixed<<setprecision(2);
    cout<<"Percentual de coelhos: "<<(C*100.0)/(C+R+S)<<" %"<<endl;
    cout<<"Percentual de ratos: "<<(R*100.0)/(C+R+S)<<" %"<<endl;
    cout<<"Percentual de sapos: "<<(S*100.0)/(C+R+S)<<" %"<<endl;

    return 0;
}