#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[100], c[100];
    int cont_b = 0, cont_c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[cont_b++] = a[i];
        }
        else
        {
            c[cont_c++] = a[i];
        }
    }

    cout << "Pares: ";
    for (int i = 0; i < cont_b; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "Impares: ";
    for (int i = 0; i < cont_c; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}