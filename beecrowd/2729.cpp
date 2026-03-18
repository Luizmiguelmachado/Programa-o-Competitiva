#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    cin.ignore();

    while (N--) {
        string S;
        getline(cin, S);

        set<string> resp;
        string palavra;

        for (int i=0; i<=S.length(); i++) {
            if (i==S.length() || S[i]==' ') {
                if (!palavra.empty()) {
                    resp.insert(palavra);
                    palavra.clear();
                }
            } else {
                palavra+=S[i];
            }
        }

        bool primeiro=true;
        for (string it : resp) {
            if (!primeiro) cout<<" ";
            cout<<it;
            primeiro=false;
        }
        cout<<endl;
    }

    return 0;
}
