#include <iostream>
using namespace std;
#include <iomanip>
 
int main() {
 
    cout << fixed << setprecision(4);
    double X;
    double N[100];
    
    cin>>X;
    N[0]=X;
    for(int i=1; i<100; i++){
        N[i]=N[i-1]/2;
    }
    for(int i=0; i<100; i++){
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
    }

    return 0;
}