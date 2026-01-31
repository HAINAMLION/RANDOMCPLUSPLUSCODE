#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x, y; cin >> n >> m >> x >> y;
    vector a(n, vector<int>(m)), b(x, vector<int>(y));
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> a[i][j];
    for (int i = 0; i < x; i++) for (int j = 0; j < y; j++) cin >> b[i][j];
    for (int i = 0; i <= n - x; i++) for (int j = 0; j <= m - y; j++) {
        bool nah = false;
        if (a[i][j] == b[0][0]) {
            for (int l = i; l < i + x; l++) {
                for (int k = j; k < j + y; k++) {
                    if (a[l][k] != b[l-i][k-j]) {
                        nah = true;
                        break;
                    }
                }
            }
        }
        else continue;
        if (!nah) {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
    return 0;
}