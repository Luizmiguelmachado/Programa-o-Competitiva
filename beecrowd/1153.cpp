#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int ans=1;
    for(int i=0; i<N; i++){
        ans*=(N-i);
    }
    cout<<ans<<endl;
    return 0;
}