#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a((n+1)*2);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[n+i] = a[i];
    }
    int x, y, res1 = 0, res2 = 0; cin >> x >> y;
    if (x > y) swap(x, y);
    for (int i = x; i < y; i++) res1 += a[i];
    for (int i = y; i < x + n; i++) res2 += a[i];
    cout << min(res1, res2) << '\n';
}