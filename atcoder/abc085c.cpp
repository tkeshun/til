//アオカビ本２ p7 abc085c
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i < (n);++i)
using namespace std;
using ll = long long;
const ll mod = 1e9+7;

int g[15][15];//正直者かどうか

int main(){
  int n,y;
  cin >> n >> y;
  vector<int> bill_count(3,-1);
  for(int i=0;i <= n;++i){
    for(int j=0; (j+i) <= n;++j){
       ll cash = (10000 * i) + (5000 * j) + (1000 * (n-i-j));
      if(y == cash){ 
        bill_count[0] = i;
        bill_count[1] = j;
        bill_count[2] = n-i-j;      
      }   
    }
  }
  rep(i,3) cout << bill_count[i] << ((i == 2) ? "\n": " ") ;
}