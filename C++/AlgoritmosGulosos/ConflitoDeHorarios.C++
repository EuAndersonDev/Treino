#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

const int N = 1000; 

int main()
{
    int n;
    cin >> n;
    pair<int, int> tarefas[N];

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        tarefas[i] = make_pair(b, a);
    }

    sort(tarefas, tarefas + n);

    int disponivel = 0;
    int resp = 0;

    for (int i = 0; i < n; i++)
    {
        int b = tarefas[i].first;
        int a = tarefas[i].second;

        if (a >= disponivel)
        {
            disponivel = b;
            resp++;
        }
    }

    cout << resp << endl;

    return 0;
}