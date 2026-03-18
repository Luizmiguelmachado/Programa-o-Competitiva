#include <iostream>
 
using namespace std;
 
int main() {
 
    int D, pont;
    cin>>D;
    if(D<=800)
        pont=1;
    
    if(D>800 && D<=1400)
        pont=2;
 
    if(D>1400 && D<=2000)
        pont=3;
        
    cout<<pont<<endl;
    return 0;
}