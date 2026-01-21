#include <bits/stdc++.h>
using namespace std;

#define Sonic ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

void fun() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int cnt = 1;  
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) 
            cnt++;
    }

    cout << cnt << "\n";
}

signed main() {
    Sonic
    fun();
}
