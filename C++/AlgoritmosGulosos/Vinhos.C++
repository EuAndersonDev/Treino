// Source: https://usaco.guide/general/io

#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int a[100000000];

int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        long long total_work = 0;
        long long prefix_soma = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            prefix_soma += a;
            if (i < n - 1)
            {
                total_work += abs(prefix_soma);
            }
        }
        cout << total_work << endl;
    }

    return 0;
}
