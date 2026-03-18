#include <iostream>
 
using namespace std;
 
int main() {
 
    float M[12][12];
    int c;
    char T;
    cin>>c>>T;
    for(int g=0; g<12; g++){
        for(int h=0; h<12; h++){
            cin>>M[g][h];
        }
    }
    float soma=0;
    if(T=='S'){
        for(int i=0; i<12; i++){
            soma+=M[i][c];
        }
        cout << fixed;
        cout.precision(1);
        cout<<soma<<endl;
    }
    if(T=='M'){
        for(int i=0; i<12; i++){
            soma+=M[i][c];
        }
        cout << fixed;
        soma=soma/12;
        cout.precision(1);
        cout<<soma<<endl;
    }
    
 
    return 0;
}