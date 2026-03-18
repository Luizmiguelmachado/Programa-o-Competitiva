#include <iostream>
 
using namespace std;
 
int main() {
 
    int L, C, resp;
    cin>>L>>C;
    if(L%2==0){
        if(C%2==0)
            resp=1;
        else
            resp=0;
    }
    else{
        if(C%2==0)
            resp=0;
        else
            resp=1;
    }
    cout<<resp<<endl;
    return 0;
}