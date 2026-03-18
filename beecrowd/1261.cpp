#include <bits/stdc++.h>

using namespace std;

int main() {

    int M, N;
    
    while (cin>>M>>N) {
        map<string, long long> hayPoints;
        string palavra;
        long long valor;

        for (int i=0; i<M; i++) {
            cin>>palavra>>valor;
            hayPoints[palavra] = valor;
        }

        cin.ignore();

        for (int i=0; i<N; i++) {
            long long total = 0;
            string linha;

            while (getline(cin, linha)) {
                if (linha == ".") break;

                string w;
                for (char c : linha) {
                    if (c ==' ') {
                        if (!w.empty()) {
                            if (hayPoints.count(w))
                                total += hayPoints[w];
                            w.clear();
                        }
                    } else {
                        w+=c;
                    }
                }

                if (!w.empty() && hayPoints.count(w))
                    total+=hayPoints[w];
            }

            cout<<total<<"\n";
        }
    }
    return 0;
}
