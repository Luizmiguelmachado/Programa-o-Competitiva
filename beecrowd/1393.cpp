#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<long long> V(41, 0);
    V[1]=1;
    V[2]=2;
    for(int i=3; i<41; i++){
        V[i]=V[i-1]+V[i-2];
    }
    int num;
    cin>>num;
    while(num!=0){
        cout<<V[num]<<endl;
        cin>>num;
    }
    
    return 0;
}