#include<iostream>
using namespace std;
int main() {
    int n, fatorial = 1;
    cin >> n;
    if (n == 0 || n == 1)
    {
        fatorial = 1;
    }else{
        for (int i = 1; i <= n; i++)
        {
            fatorial *= i;
        }
    }
    cout << fatorial << endl;
    return 0;

}