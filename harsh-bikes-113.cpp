// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    sort(v.begin(), v.end());
    // v.pop_back();
    // v.erase(v.begin()+0);
    // v.erase(v.begin()+1, v.begin()+3);
    for(int i=0; i < (int)v.size(); i++){
        cout << v[i];
    };
    cout<< endl;
    sort(v.end(), v.begin());
    v.clear();
    for(int i=0; i < (int)v.size(); i++){
        cout << v[i];
    };
    cout << endl;

    // v = {1, 2, 3, 4, 5}
    v.resize(8); // Muda o tamanho do vector v para 8
    // v = {1, 2, 3, 4, 5, 0, 0, 0}
    for(int i=0; i < (int)v.size(); i++){
        cout << v[i];
    };
    cout << endl;
    // v = {1, 2, 3, 4, 5, 0, 0, 0}
    v.resize(12,-1); // Muda o tamanho do vector v para 12 e nas posições novas/vazias insere o número -1
    // v = {1, 2, 3, 4, 5, 0, 0, 0, -1, -1, -1, -1}
    for(int i=0; i < (int)v.size(); i++){
        cout << v[i];
    };
    cout << endl;
    return 0;
}
