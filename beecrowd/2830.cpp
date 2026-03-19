#include <iostream>
using namespace std;

int main() {
    int k, l;
    cin>>k>>l;
    
    int round=0;
    while(k!=l){
        k=(k+1)/2;
        l=(l+1)/2;
        round++;
    }
    
    if (round==1) cout<<"oitavas"<<endl;
    else if (round==2)cout<<"quartas" << endl;
    else if (round==3) cout<<"semifinal"<<endl;
    else cout<<"final"<<endl;
    
    return 0;
}