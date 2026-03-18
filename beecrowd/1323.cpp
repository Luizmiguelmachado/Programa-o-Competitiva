#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N){
        int quant;
        quant = (N*(N + 1)*(2*N+1))/6;
        cout<<quant<<endl;
        cin>>N;
    }
    return 0;
}