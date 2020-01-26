#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i < (n);i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main(){
    ll n,k;
    cin >> n >> k;
    vector<int> h(n,0);
    rep(i,n) cin >> h[i];
    sort(h.rbegin(),h.rend());
    ll ans = 0;
    for(ll i = (k);i<n;i++){
        ans+=h[i];
    }
    cout << ans << endl;
}
