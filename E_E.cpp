#include <bits/stdc++.h>
using namespace std;

#define Sonic ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

void fun() {
    int n, x;
    cin >> n >> x;

    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i + 1; 
    }

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    while(l < r){
        long long s = a[l].first + a[r].first;

        if(s == x){
            int g = a[l].second;
            int v = a[r].second;
           
            if(g < v){

             cout << g << " " << v << "\n";
            }
            else 
            cout << v << " " << g << "\n";

            return;
        }

        if(s < x) l++;
        else r--;
    }

    cout << "IMPOSSIBLE\n";
}

signed main(){
    Sonic
    fun();
}
