// Source: https://usaco.guide/general/io

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> lista;

    bool visitados[n + 1] = {false};

    lista.push_back(1);
    visitados[1] = true;

    while (lista.size() != 0)
    {
        int a = lista.back();
        lista.pop_back();

        for (int b : adj[a])
        {
            if (visitados[b] == false)
            {
                lista.push_back(b);
                visitados[b] = true;
            };
        };
    };

    if (visitados[n] == true)
    {
        cout << "S";
    }
    else
    {
        cout << "N";
    };
}
