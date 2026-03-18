#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++) {
        string linha;
        getline(cin, linha);

        for (int g=0; g<linha.length(); g++) {
            if (isalpha(linha[g])) {
                linha[g]+=3;
            }
        }
        
        reverse(linha.begin(), linha.end());
        
        for (int g=linha.length()/2; g<linha.length(); g++) {
            linha[g]--;
        }
    
        cout<<linha<<endl;   
    }
    return 0;
}