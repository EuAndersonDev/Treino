#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m], c[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    int min_add = INT_MAX;

    for (int start = 0; start < 2; start++)
    {
        int add = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                b[i][j] = a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int esperado = ((i + j + start) % 2 == 0) ? 1 : 0;
                if (b[i][j] % 2 != esperado)
                {
                    b[i][j]++;
                    add++;
                }
            }
        }
        if (add < min_add)
        {
            min_add = add;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    c[i][j] = b[i][j];
                }
            }
        }
    }

    cout << min_add << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}