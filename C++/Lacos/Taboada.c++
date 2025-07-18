#include <iostream>
using namespace std;

int main(){
    int n = 1;
    while (n < 11)
    {
        for (int i = 1; i< 11; i++)
        {
            cout << n << "x" << i << "=" << n*i << endl;
        }
        n = n + 1;
    }

    

    
}

