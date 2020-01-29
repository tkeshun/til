#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i < (n);++i)
#define all(x) (x).begin(), (x).end()
using namespace std;
using ll = long long;

vector<int> fib_t(1000,false);
vector<int> fib_n(1000,0);
/*Recursion*/
int fib_r(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(fib_t[n] == true) return fib_n[n];
    fib_t[n] = true;
    return fib_n[n] = fib_r(n-1) + fib_r(n-2);
}

/*dp*/
int dp[1005];
int fib_dp(int n){
    dp[0] = 0;dp[1] = 1;
    for(int i=2;i <= n;i++) dp[i] = dp[i-1] + dp[i-2];
    return dp[n];
}

int main(){
    int num = 0;
    cin >> num;
    cout << "Recursion:" << fib_r(num) << "\n";
    cout << "DP       :" << fib_dp(num) << "\n";

} 
