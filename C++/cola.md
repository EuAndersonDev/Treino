Perfeito! Vou montar uma **versão completa, organizada e fácil de consultar**, estilo “super colinha de programação competitiva em C++”. Vou separar por categorias, colocar exemplos curtos e deixar bem visual.

---

# **💻 Colinha C++ – Programação Competitiva**

---

## **1️⃣ Entrada e saída rápida**

```cpp
#include <iostream>
using namespace std;

int x; 
cin >> x;                 // ler int
string s;
getline(cin, s);          // ler linha inteira
cout << x << endl;        // imprimir
```

**Dicas de velocidade em competições:**

```cpp
ios::sync_with_stdio(false);
cin.tie(0);
```

---

## **2️⃣ Matemática**

```cpp
#include <cmath>
#include <algorithm>

// Potência, raiz e arredondamento
pow(a, b);       // a^b (double)
sqrt(x);         // raiz quadrada
ceil(x);         // arredonda para cima
floor(x);        // arredonda para baixo
round(x);        // arredonda para o mais próximo

// Valor absoluto
abs(x);          // int ou double

// Máximo, mínimo e troca
max(a,b); min(a,b);
swap(a,b);

// GCD e LCM
gcd(a,b); lcm(a,b);

// Constantes
const double PI = acos(-1);
const int INF = 1e9;
const long long LINF = 1e18;
const int MOD = 1e9+7;
```

---

## **3️⃣ Strings**

```cpp
#include <string>
#include <algorithm>

s.size();                   // tamanho
s.empty();                  // verifica se vazia
s.substr(i, l);             // substring de tamanho l
s.find("x");                // posição da primeira ocorrência
s.replace(i, l, "abc");     // substitui
reverse(s.begin(), s.end()); // inverte
to_string(n);               // int -> string
stoi(s);                    // string -> int
```

---

## **4️⃣ Arrays e vetores**

```cpp
#include <vector>
#include <algorithm>

vector<int> v = {1,2,3};
v.size(); v.push_back(x); v.pop_back(); v.clear();

// Ordenação
sort(v.begin(), v.end());                  // crescente
sort(v.begin(), v.end(), greater<int>()); // decrescente
reverse(v.begin(), v.end());               // inverter

// Máximo e mínimo
*max_element(v.begin(), v.end());
*min_element(v.begin(), v.end());

// Arrays
int arr[5] = {5,2,9,1,7};
sort(arr, arr+5);                          // ordenar
reverse(arr, arr+5);                       // inverter
```

---

## **5️⃣ STL – Estruturas de dados**

```cpp
#include <set>
#include <map>
#include <queue>
#include <stack>

// Set
set<int> s;
s.insert(x); s.erase(x); s.find(x) != s.end();

// Map
map<int,int> mp;
mp[key] = value;
mp.find(key) != mp.end();

// Queue
queue<int> q;
q.push(x); q.pop(); q.front(); q.back();

// Stack
stack<int> st;
st.push(x); st.pop(); st.top();
```

---

## **6️⃣ Funções de algoritmos**

```cpp
#include <algorithm>

// Busca binária
lower_bound(v.begin(), v.end(), x); // >= x
upper_bound(v.begin(), v.end(), x); // > x

// Permutações
next_permutation(v.begin(), v.end());
prev_permutation(v.begin(), v.end());
```

---

## **7️⃣ Recursão**

```cpp
// Fatorial
int fatorial(int n) {
    if(n <= 1) return 1;
    return n * fatorial(n-1);
}

// Fibonacci
int fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

// Soma de 1 até N
int soma(int n) {
    if(n == 1) return 1;
    return n + soma(n-1);
}
```

---

## **8️⃣ Operadores bitwise**

```cpp
x & 1;       // verifica se é ímpar
x | 1;       // define o último bit
x ^ y;       // XOR
x << k;      // shift left (x*2^k)
x >> k;      // shift right (x/2^k)
__builtin_popcount(x);   // número de bits 1
```

---

## **9️⃣ Constantes e macros úteis**

```cpp
#define all(v) v.begin(), v.end() // para sort, lower_bound...
#define pb push_back
#define sz(v) (int)v.size()
```

---

## **🔟 Dicas de prática**

* Use `vector` em vez de arrays para maior flexibilidade.
* Prefira `sort(v.begin(), v.end())` e `max_element` para evitar loops manuais.
* Memorize casos de recursão clássicos: fatorial, fibonacci, soma, permutações.
* Para grandes N, cuidado com recursão simples (use DP ou iteração).
* Sempre inclua `#include <bits/stdc++.h>` em competições (contém tudo da STL).

---

Se você quiser, posso fazer **uma versão visual ainda mais “compacta” de 1 página**, com **tudo que aparece mais em concursos**, para imprimir e ter na frente do PC.

Quer que eu faça essa versão ultra compacta?
