#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
const int MOD = 1000000007; 
#define Sonic ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
template<typename T>ostream& operator<<(ostream& os, vector<T>& v) {
    for (auto& i : v) os << i << ' ';
    return os;
}
template<typename T>istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;}
void FastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
void fun() {
   string s; 
   getline(cin,s);
   int n; cin >> n;
   int hours = (s[0] - '0') * 10;
   hours += (s[1] - '0');
   int min = (s[3] - '0') * 10;
   min += (s[4] - '0');
   int addh = n / 60;
   int addm = n % 60;
    hours = (hours + addh) % 24;
    hours = (hours + ((addm + min) / 60) )% 24 ;
    min = (min + addm) % 60;
    if(min < 10 && hours < 10){
        cout << 0 <<  hours << ":" << 0 << min  << '\n';
        return;
    }

    if(min < 10){
        cout << hours << ":" << 0 << min  << '\n';
        return;     
    }
    if(hours < 10){
        cout << 0 << hours << ":" << min  << '\n';
    }
    cout << hours << ":" << min ;
}
signed main() {
    Sonic
    fun();
}
  
 
 