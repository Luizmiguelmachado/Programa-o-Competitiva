#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    int cont[T];
    for (int i=0; i<T; i++){
        cont[i]=0;
    }
    string A, B;
    for (int i=0; i<T; i++){
        cin>>A;
        cin>>B;
        int g=0;
        while (B!=A) {
            if (A[g]==B[g]){
                g++;
            } 
            else{
                if(A[g]=='z'){
                    A[g]='a';
                    cont[i]++;
                }
                else{
                    A[g]++;
                    cont[i]++;   
                }
            }
        }
    }
    
    for (int i=0; i<T; i++) {
        cout<<cont[i]<<endl;
    }

    return 0;
}
