#include <iostream>
 
using namespace std;
 
int main() {
 
    int T;
    cin>>T;
    int N[1000], g=0;
    while(g!=1000){
        for(int i=0; i<T; i++){
            N[g]=i;
            g++;
            if(g==1000){
                break;
            }
        }
    }
    for(int i=0; i<1000; i++){
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }
 
    return 0;
}