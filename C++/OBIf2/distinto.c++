#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    scanf("%d", &p);
    int resp[10005];
    for (int i = 0; i < p; i++)
    {
        int L, A, B;
        scanf("%d %d %d", &L, &A, &B);
        int respTemp = -1;
        int ini = 1, fim = B - A + 1;
        while (ini <= fim)
        {
            int meio = (ini + fim) / 2;
            long long soma = (long long)meio * (2LL * A + meio - 1) / 2;
            if (soma >= L)
            {
                respTemp = meio;
                fim = meio - 1;
            }
            else
            {
                ini = meio + 1;
            }
        }
        resp[i] = respTemp;
    }

    for (int i = 0; i < p; i++)
    {
        printf("%d\n", resp[i]);
    }
    return 0;
}
    