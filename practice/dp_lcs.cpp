//LCS問題
/***
QiitaのDPより練習用
LCS　：　最長共通部分列
2つの文字列 SS, TT が与えられる。
"abcde" といった文字列の部分文字列とは、
"a", "ad", "abe" といったように、
文字列から文字を幾つか抜き出して順に繋げてできる
文字列のことを言うものとする。
このとき、SS と TT の共通の部分文字列となる文字列の長さの
最大値を求めよ。

***/
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using G = vector<vector<int>>;

//入力変数
string S, T;
//DPtable
int dp[1010][1010];

int main(){
    
    cin >> S >> T;//入力
    memset(dp,0 ,sizeof(dp));//初期化
    
    //DP loop
    for(int i=0;i< S.size(); ++i){
        for(int j=0;j < T.size();++j){
            //i番目の文字が同じならdop[i][j]の時点から長さ+1
            /*dp[i+1][j+1] := Sのi文字目までとTのj文字目までのLCSの長さ*/
            if(S[i] == T[j]) dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + 1);
            
            //一致しないときの処理
            /*dp[i+1][j] := Sのi文字目までとj-1番目までのLCSの長さ
              dp[i][j+1] := Sのi-1文字目までとj番目までのLCSの長さ
            */
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]);//元の一致数が少ないときはSを次に進めても変化なし
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);//Tを進めても同じ
            
        }
    }
    cout << dp[S.size()][T.size()] << endl;//最終的なマッチング数
}
