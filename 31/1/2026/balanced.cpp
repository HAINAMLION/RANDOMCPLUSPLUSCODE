#include <iostream>

using namespace std;

const int INF = 1000005;
bool isP[INF];

int sumDigit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void sangNT() {
    fill_n(isP, INF, true);
    isP[0] = isP[1] = false;
    for (int i = 2; i * i <= INF; i++) if (isP[i]) for (int j = i * i; j < INF; j += i) isP[j] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    sangNT();
    int n; cin >> n;
    while (n--) {
        int l, r; cin >> l >> r;
        vector<int> f;
        for (int i = l; i <= r; i++) {
            
        }
        if (i % 2 == 0) continue;
        else if (isPrime(i) && isPrime(sumDigit(n))) res++;
        cout << res << '\n';
    }
    return 0;
}