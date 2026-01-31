#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int status = 1, preX = -1000005;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (status == 1 && x <= preX) status++;
        else if (status == 2 && x >= preX) { cout << "NO" << '\n'; return 0; }
        preX = x;
    }
    cout << "YES" << '\n';
    return 0;
}