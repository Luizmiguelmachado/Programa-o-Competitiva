#include <iostream>
 
using namespace std;
 
int main() {
 
    int N[20];
    for(int i=0; i<20; i++){
        cin>>N[i];
    }
    int g=19, cop[20];
    for(int i=0; i<10; i++){
        cop[i]=N[g];
        cop[g]=N[i];
        g--;
    }
    for(int i=0; i<20; i++){
        cout<<"N["<<i<<"] = "<<cop[i]<<endl;
    }
    
    return 0;
}
