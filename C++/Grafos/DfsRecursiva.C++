#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100001];
bool visitado[100001];

void dfs(int a)
{
    visitado[a] = true;

    for (int b : adj[a])
    {
        if (visitado[b] == false)
        {
            dfs(b);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
        visitado[i] = false;
    int componentes = 0;

    for (int i = 1; i <= n; i++)
    {
        if (visitado[i] == false)
        {
            componentes++;
            dfs(i);
        }
    }

    cout << componentes << endl;
}
