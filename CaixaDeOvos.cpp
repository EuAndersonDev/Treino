// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; // quantidade mínima de ovos
    int S, M, E; // preços dos pacotes
    cin >> N >> S >> M >> E;

    int resposta = INT_MAX;

    // Limite máximo de pacotes para cada tipo
    int limite = N / 6 + 2; // +2 só pra garantir que cubra "pelo menos N"

    for (int x = 0; x <= limite; x++) {        // pacotes de 6 ovos
        for (int y = 0; y <= limite; y++) {    // pacotes de 8 ovos
            for (int z = 0; z <= limite; z++) { // pacotes de 12 ovos
                int ovos = 6 * x + 8 * y + 12 * z;
                if (ovos >= N) {
                    int custo = S * x + M * y + E * z;
                    resposta = min(resposta, custo);
                }
            }
        }
    }

    cout << resposta << endl;
    return 0;
}
