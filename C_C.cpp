#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, K;
    cin >> N >> M >> K;

    vector<long long> H(N), B(M);
    for (int i = 0; i < N; i++) cin >> H[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(H.begin(), H.end());
    sort(B.begin(), B.end());

    bool ok = true;
    for (int i = 0; i < K; i++) {
         if (H[i] > B[M-K+i]) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "Yes" : "No") << "\n";
}

