Claro, Anderson! Aqui vai uma **colinha prática de C++** com foco em **programação competitiva**, cobrindo sintaxe básica, funções úteis e STL (Standard Template Library), muito usada em competições como OBI, Codeforces, LeetCode, etc.

---

### 🧱 **Sintaxe Básica**

```cpp
#include <bits/stdc++.h> // Inclui tudo (em competições)
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Otimiza IO
    cin.tie(0); // Desvincula cin de cout

    int a = 10;
    cout << "Olá mundo!\n";
    return 0;
}
```

---

### 🧮 **Tipos e Estruturas Comuns**

```cpp
int, long long, float, double, char
string str = "abc";
vector<int> v; // vetor dinâmico
pair<int, int> p = {1, 2}; // par
map<int, int> m; // dicionário ordenado
unordered_map<int, int> um; // dicionário não ordenado
set<int> s; // conjunto ordenado
unordered_set<int> us;
```

---

### 🔁 **Laços e Condições**

```cpp
for (int i = 0; i < n; i++) {...}
while (condição) {...}
if (condição) {...} else {...}
```

---

### 📥 **Entrada e Saída**

```cpp
int a;
cin >> a;
cout << a << "\n";
getline(cin, str); // Lê linha inteira
```

---

### 🧠 **Funções Úteis**

```cpp
int max(int a, int b), min(a, b), abs(a);
sort(v.begin(), v.end()); // ordena vetor
reverse(v.begin(), v.end()); // inverte
count(v.begin(), v.end(), x); // conta quantos x
accumulate(v.begin(), v.end(), 0); // soma elementos
```

---

### 📚 **Algoritmos STL Importantes**

```cpp
sort(v.begin(), v.end()); // O(n log n)
binary_search(v.begin(), v.end(), x); // vetor deve estar ordenado
lower_bound(v.begin(), v.end(), x); // primeiro >= x
upper_bound(v.begin(), v.end(), x); // primeiro > x
```

---

### 🔧 **Funções Customizadas**

```cpp
int soma(int a, int b) {
    return a + b;
}

// lambda function
auto cmp = [](int a, int b) {
    return a > b; // ordena decrescente
};
sort(v.begin(), v.end(), cmp);
```

---

### 🧮 **Módulo e Potência**

```cpp
const int MOD = 1e9 + 7;

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
```

---

### 🧪 **Debug Rápido**

```cpp
cerr << "valor: " << x << "\n"; // para debug, sai no stderr
```

---

### 🗃️ **Macros Úteis (não obrigatório, mas populares)**

```cpp
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
```

---

### 📌 Dicas para Competições

* Use `vector` no lugar de array quando possível.
* Sempre use `ios::sync_with_stdio(false); cin.tie(0);` no começo.
* `long long` para evitar overflow.
* Cuidado com índices fora dos limites!
* Use `set`/`map` quando precisar de ordenação automática.

---

Se quiser, posso montar uma folha A4 imprimível com essa colinha bem formatada. Deseja isso?
