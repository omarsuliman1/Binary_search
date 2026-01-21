#include <bits/stdc++.h>
using namespace std;
#define Sonic ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
void fun(){
    int n;
    cin >> n;
  long long S = n * (n + 1) / 2;
    if (S % 2 != 0){
        cout << "NO\n";
        return;
    }
  vector<int> a, b;
   if (n % 4 == 0){
        for (int i = 1, j = n; i < j; i++, j--){
            if ((i % 2) == 1){
                a.push_back(i);
                a.push_back(j);
            } else {
                b.push_back(i);
                b.push_back(j);
            }
        }
    } 
    else {
         a.push_back(1);
        a.push_back(2);
        b.push_back(3);
 for (int i = 4, j = n; i < j; i++, j--){
            if ((i % 2) == 0){
                a.push_back(i);
                a.push_back(j);
            } else {
                b.push_back(i);
                b.push_back(j);
            }
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    cout << "YES\n";
    
    cout << a.size() << "\n";
    for (auto x : a) cout << x << " ";
    cout << "\n";

    cout << b.size() << "\n";
    for (auto x : b) cout << x << " ";
    cout << "\n";
}

signed main(){
    Sonic
    fun();
}
