#include <iostream>
 
using namespace std;
 
int main() {
 
    char O;
    cin>>O;
    float M[12][12];
    for(int i=0; i<12; i++){
        for(int g=0; g<12; g++){
            cin>>M[i][g];
        }
    }
    float soma=0;
    int m=1, n=10, cont=0;
    for(int i=11; i>=7; i--){
        for(int g=m; g<=n; g++){
            soma+=M[g][i]; 
            cont++;
        }  
        n--;
        m++;
    }
    if(O=='S'){
        cout<<fixed;  
        cout.precision(1);
        cout<<soma<<endl;
    }
    
    if(O=='M'){
        soma=soma/cont;
        cout<<fixed;  
        cout.precision(1);
        cout<<soma<<endl;
    }
    return 0;
}