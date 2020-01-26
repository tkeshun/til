#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i < (n);i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main(){

    int  h,n,a;
    cin >> h >> n ;
    int total = 0;
    rep(i,n){
        int tt = 0;
         cin >> tt;
         total += tt;
    }

    if(h <= total) cout << "Yes" << endl;
    else cout << "No" << endl;
}
