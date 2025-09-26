// Source: https://usaco.guide/general/io

#include <iostream>
#include <vector>
using namespace std;

// 1. DECLARAR
vector<int> adj[100001];
bool visitado[100001];

// 3. FUNÇÃO DFS (sempre a mesma)
void dfs(int atual)
{
    cout << "Visitando aluno: " << atual << endl;
    visitado[atual] = true;
    for (int vizinho : adj[atual])
    {
        cout << "Aluno " << atual << " tem amigo: " << vizinho;
        cout << " - Visitado? " << visitado[vizinho] << endl;
        if (!visitado[vizinho])
        {
            dfs(vizinho);
        }
    }
}
int main()
{
    // 2. LER E CONSTRUIR GRAFO
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        visitado[i] = false;
        adj[i].clear();
    };

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    };

    int componentes = 0;
    // 4. CONTAR COMPONENTES
    for (int i = 1; i < n; i++)
    {
        if (!visitado[i])
        {
            cout << "=== NOVO COMPONENTE #" << componentes << " começando no aluno " << i << " ===" << endl;
            componentes++;
            dfs(i);
        };
    };

    cout << "RESULTADO FINAL: " << componentes << endl;
}