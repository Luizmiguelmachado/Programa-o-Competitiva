#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> V(N);
    for(int i=0; i<N; i++){
        cin>>V[i];
    }
    int primeiro = V[0];
    sort(V.begin(), V.end());
    int a = V.size()-1;
    if(primeiro==V[a]) cout<<"S"<<endl;
    else    cout<<"N"<<endl;
    
    return 0;
}