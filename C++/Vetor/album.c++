#include <iostream>
using namespace std;
int main(){
    int n, m, qtd=0;
    cin >> n;
    cin >> m;
    int f[m];
    int lf[n];
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < n; i++)
    {
        lf[i] = i+1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (f[i] == lf[j])
            {
                lf[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (lf[i] != 0)
        {
            qtd++;
        }
    }
    
    cout << qtd << endl;
    
    return 0;
    

}