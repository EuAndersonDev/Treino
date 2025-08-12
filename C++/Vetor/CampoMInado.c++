#include <iostream>
using namespace std;
int a[10];
int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i-1] + a[i] + a[i+1] << " ";
    }
    cout << endl;
    return 0;
    
    
}


