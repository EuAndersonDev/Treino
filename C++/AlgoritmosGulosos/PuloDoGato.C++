
#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;
    int l[c];
    for (int i = 0; i < c; i++)
        cin >> l[i];
    int i = 0, cont = 0;
    while (i < c - 1)
    {
        if (l[i + 2] == 1 && i + 2 < c)
        {
            i += 2;
            cont++;
        }
        else if (l[i + 1] == 1 && i + 1 < c)
        {
            i++;
            cont++;
        }
        else
        {
            cont = -1;
            break;
        }
    }

    cout << cont << endl;
}
