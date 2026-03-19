#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;

    int in=0, out=0;
    for(int i=0; i<N; i++){
        int X;
        cin>>X;
        if(X>=10 && X<=20) in++;
        else out++;
    }
    cout<<in<<" in"<<endl<<out<<" out"<<endl;

    return 0;
}