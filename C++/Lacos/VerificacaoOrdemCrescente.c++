#include <iostream>
using namespace std;

int main(){
    int n, anterior, atual;
    bool ordem=true;
    cin >> n;
    cin >> anterior;
    for (int i = 0; i < n; i++)
    {
        cin >> atual;

        if(anterior <= atual){
            ordem =true;
        }
        anterior = atual;
    }
    if (ordem == true)
    {
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    
    return 0;

}