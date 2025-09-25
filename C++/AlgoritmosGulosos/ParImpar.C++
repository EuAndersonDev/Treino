#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;
    int d1, d2;
    cin >> d1;
    cin >> d2;

    int soma = d1 + d2;
    if (soma % 2 == 0 && p == 0)
    {
        cout << 0 << endl;
    }
    else if (soma % 2 != 0 && p == 1)
    {
        cout << 0 << endl;
    }
    else if (soma % 2 == 0 && p == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}