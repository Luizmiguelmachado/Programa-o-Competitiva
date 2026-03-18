#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    cin>>N;
    cin.ignore();
    for(int i=0; i<N; i++){
        string frase;
        getline(cin, frase);
        string correto;
        for(int g=(frase.size()/2)-1; g>=0; g--)
            correto += frase[g];
        
        for(int g=frase.size()-1; g>=frase.size()/2; g--)
            correto += frase[g];
        cout<<correto<<endl;
    }

    return 0;
}