#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >>m;
    int a[n][m];
    int somaPrincipal = 0, somaSecundaria = 0;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (i == j)
            {
                somaPrincipal += a[i][j];
            }
            if (i + j == n - 1)
            {
                somaSecundaria += a[i][j];
            }
        }
    }

    cout << "Diagonal principal: " << somaPrincipal << endl;
    cout << "Diagonal secundaria: " << somaSecundaria << endl;
}