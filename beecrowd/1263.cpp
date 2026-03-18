#include <bits/stdc++.h>
using namespace std;

int main() {
    string frase;

    while (getline(cin, frase)) {
        vector<string> palavras;
        string aux = "";

        for (int i = 0; i < frase.size(); i++) {
            if (frase[i] == ' ') {
                palavras.push_back(aux);
                aux = "";
            } else {
                aux += frase[i];
            }
        }

        palavras.push_back(aux);

        int cont = 0;
        bool emAliteracao = false;

        for (int i = 1; i < palavras.size(); i++) {
            char atual = tolower(palavras[i][0]);
            char anterior = tolower(palavras[i - 1][0]);

            if (atual == anterior) {
                    emAliteracao = true;
                
            } else  if(emAliteracao){
                emAliteracao = false;
                cont++;
            }
        }
        if(emAliteracao){
            cont++;
        }

        cout << cont << endl;
    }

    return 0;
}
