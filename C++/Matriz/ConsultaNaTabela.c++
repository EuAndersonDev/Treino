#include <iostream>
using namespace std;

int main(){
    int n,m,q,l,c;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }
    cin >> q;
    for (int i = 0; i < q; i++)
        {
        cin >> l >> c;
        cout << a[l][c] << endl;
    }
    

    

}