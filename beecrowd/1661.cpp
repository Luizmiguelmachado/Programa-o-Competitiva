#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    
    while(cin>>N){
        if(N==0) break;
        long long resp=0, aux=0;
        
        /*
            -3 1
            aux=2
            resp=8
        */
        
        for(int i=0; i<N; i++){
            int num;
            cin>>num;
            aux+=num;
            
            if(aux<0)   resp+=(aux*-1);
            else resp+=aux;
            
        }
        
        cout<<resp<<endl;
        
    }

    return 0;
}