#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int area = a + b;
    for (int h = 3; h <= sqrt(area); h++) {
        if (area % h == 0) {
            int w = area / h;
            if (2 * (h + w) - 4 == a && (h - 2) * (w - 2) == b) {
                cout << min(h, w) << " " << max(h, w) << "\n";
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << "\n";
    return 0;
}
