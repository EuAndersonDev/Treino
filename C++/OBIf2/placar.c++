#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, c;
    cin >> p;
    vector<int> pgol(p);
    for (int i = 0; i < p; i++)
        cin >> pgol[i];

    cin >> c;
    vector<int> cgol(c);
    for (int i = 0; i < c; i++)
        cin >> cgol[i];

    vector<pair<int, int>> gols;
    for (int i = 0; i < p; i++)
        gols.push_back({pgol[i], 0}); 
    for (int i = 0; i < c; i++)
        gols.push_back({cgol[i], 1});

    // Ordena por minuto
    sort(gols.begin(), gols.end());

    int placarP = 0, placarC = 0;
    cout << placarP << " " << placarC << endl; 

    for (int i = 0; i < (int)gols.size(); i++)
    {
        if (gols[i].second == 0)
            placarP++;
        else
            placarC++;
        cout << placarP << " " << placarC << endl;
    }
    return 0;
}