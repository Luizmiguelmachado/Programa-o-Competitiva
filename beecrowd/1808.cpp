#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string S;
    cin>>S;
    double soma=0;
    int cont=0;
    
    for(int i=0; i<S.length(); i++){
        if(i+1!=S.length() && S[i]=='1' && S[i+1]=='0'){
            soma+=10;
            i++;
            cont++;
        }
        else{
            int num = S[i] - '0';
            soma+=num;
            cont++;
        }
    }
    double media = soma/cont;
    cout<<fixed<<setprecision(2);
    cout << media << endl;

    return 0;
}