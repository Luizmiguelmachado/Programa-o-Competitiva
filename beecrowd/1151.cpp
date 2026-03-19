#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int F=0, S=1;
    cout<<F<<" "<<S<<" ";
    int aux=0;
    for(int i=0; i<N-2; i++){
        aux=S;
        S=F+S;
        F=aux;
        if(i==N-3) cout<<S<<endl;
        else cout<<S<<" ";
    }

    return 0;
}