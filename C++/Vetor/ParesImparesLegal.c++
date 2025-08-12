#include <iostream>
using namespace std;

int main(){
    int n, cout_a=0, cout_b=0;
    cin >> n;
    int a[100],b[100], x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        if (i%2 ==0)
        {
            a[cout_a++] = x[i];
        } else{
            b[cout_b++] = x[i];
        }
    }
    for (int i = 0; i <cout_a ; i++)
    {
        cout << a[i];
    }
    cout << endl;
    for (int i = 0; i < cout_b; i++)
    {
        cout << b[i];
    }
    cout << endl;
    return 0;
}