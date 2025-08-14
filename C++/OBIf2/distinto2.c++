#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin >> p;
    vector<int>resp(p);
    for (int i = 0; i < p; i++)
    {
        int L, A, B;
        cin >> L >> A >> B;
        int soma = 0, respTemp = 0;
        for (int j = A; j <= B; j++)
        {
            soma += j;
            respTemp++;
            if (soma >= L)
                break;
        }
        resp[i] = respTemp;
    }

    for (int i = 0; i < p; i++)
    {
        cout << resp[i] << endl;
    }

    return 0;
}