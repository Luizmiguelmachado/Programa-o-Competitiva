#include <bits/stdc++.h>
using namespace std;

struct Time {
    int id;
    int pontos = 0;
    int marcados = 0;
    int sofridos = 0;
};

vector<Time> times;

double cestaAverage(const Time& t) {
    if (t.sofridos == 0) return t.marcados;
    return (double)t.marcados / t.sofridos;
}

bool compareTimes(const Time& a, const Time& b) {
    if (a.pontos != b.pontos) return a.pontos > b.pontos;
    double ca = cestaAverage(a);
    double cb = cestaAverage(b);
    if (ca != cb) return ca > cb;
    if (a.marcados != b.marcados) return a.marcados > b.marcados;
    return a.id < b.id;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, instancia = 0;
    bool primeiro = true;

    while (cin >> n && n != 0) {
        if (!primeiro) cout << "\n";
        primeiro = false;

        times.assign(n + 1, Time());
        for (int i = 1; i <= n; i++) times[i].id = i;

        int totalPartidas = n * (n - 1) / 2;

        for (int i = 0; i < totalPartidas; ++i) {
            int x, y, z, w;
            cin >> x >> y >> z >> w;

            times[x].marcados += y;
            times[x].sofridos += w;
            times[z].marcados += w;
            times[z].sofridos += y;

            if (y > w) {
                times[x].pontos += 2;
                times[z].pontos += 1;
            } else {
                times[z].pontos += 2;
                times[x].pontos += 1;
            }
        }

        vector<Time> ordenados(times.begin() + 1, times.end());
        sort(ordenados.begin(), ordenados.end(), compareTimes);

        instancia++;
        cout << "Instancia " << instancia << "\n";
        for (size_t i = 0; i < ordenados.size(); i++) {
            if (i > 0) cout << " ";
            cout << ordenados[i].id;
        }
        cout << "\n";
    }

    return 0;
}
