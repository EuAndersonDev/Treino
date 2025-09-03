// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    int chinelos[n];
    for (int i=0;i<n;i++) cin >> chinelos[i];
    int p;
    cin >> p;
    int vendidos[p];
    for (int i=0; i<p; i++) cin >> vendidos[i];
    int qtd=0;
    for (int i=0; i<p; i++) {
        for (int j=0; j<n;j++) {
            if (vendidos[i]==j+1 && chinelos[j] != 0) {
                qtd++;
                chinelos[j]  - 1;   
            }else{
                continue;
            }
        }
    }

    cout << qtd << endl;
}
