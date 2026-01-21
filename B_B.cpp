#include <bits/stdc++.h>
using namespace std;
#define Sonic ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) (v).begin(), (v).end()
void fun(){
    string s;
    cin >> s;
 int mx = 1, cur = 1;
 for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) cur++;
        else cur = 1;
        mx = max(mx, cur);
    }

    cout << mx << "\n";
}

signed main(){
    Sonic
    int t = 1;
    // cin >> t;
    while(t--) fun();
}
