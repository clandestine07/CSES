#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define mpp unordered_map<int, int>
#define mp map<int, int>
#define st set<int>
#define mt multiset<int>
#define pp pair<int, int>
#define pc pair<char, int>
#define vi vector<int>
#define vl vector<long long>
#define vii vector<vector<int> >
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> v[i][j];
        }
    }
    
    vii dp(n, vi(n, 0));
    dp[n-1][n-1] = (v[n-1][n-1] == '*') ? 0 : 1;
 
    for(int i = n - 1; i >= 0; --i) {
        for(int j = n - 1; j >= 0; --j) {
            if(v[i][j] == '*') {
                dp[i][j] = 0;
                continue;
            }
            if(j+1 < n){
                dp[i][j] = (dp[i][j] + dp[i][j+1]) % mod;
            }
            if(i+1 < n){
                dp[i][j] = (dp[i][j] + dp[i+1][j]) % mod;
            }
        }
    }
 
    cout << dp[0][0] << "\n";
    return 0;
}