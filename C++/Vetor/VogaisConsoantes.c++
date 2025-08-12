#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string vogais = "", consoantes = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
        {
            vogais += s[i];
        }
        else
        {
            consoantes += s[i];
        }
    }
    cout << "Vogais: " << vogais << "\n";
    cout << "Consoantes: " << consoantes << "\n";
}