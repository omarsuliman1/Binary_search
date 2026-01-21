#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k;

bool ok(ll v) {
    ll sum = 0;
    ll cur = v;

    while (cur > 0) {
        sum += cur;
        if (sum >= n) return true;
        cur /= k;
    }

    return sum >= n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;

    ll l = 1, r = n, ans = n;

    while (l <= r) {
        ll mid = (l + r) / 2;

        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << "\n";
}
