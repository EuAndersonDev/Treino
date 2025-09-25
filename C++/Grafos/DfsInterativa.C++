#include <iostream>
#include <vector>
#include <algorithm>
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

    bool visitados[n + 1] = {false};
    int componentes = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!visitados[i])
        {
            componentes++;

            vector<int> lista;
            lista.push_back(i);
            visitados[i] = true;

            while (!lista.empty())
            {
                int atual = lista.back();
                lista.pop_back();

                for (int vizinho : adj[atual])
                {
                    if (visitados[vizinho] == false)
                    {
                        visitados[vizinho] = true;
                        lista.push_back(vizinho);
                    }
                }
            }
        }
    }

    cout << componentes << endl;
}
