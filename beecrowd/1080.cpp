#include <iostream>

using namespace std;

int main()
{
    int maior=-1, ind=0;
    for(int i=1; i<=100; i++){
        int N;
        cin>>N;
        if(N>maior){
            maior=N;
            ind=i;
        }
    }
    cout<<maior<<endl<<ind<<endl;

    return 0;
}