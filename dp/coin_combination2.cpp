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

int main(){

    int n, x;
    cin >> n >> x;
    vi v(n);
    for(int &i : v) cin >> i;
    int mod = 1e9+7;
 
    vii dp(n+1, vi(x+1, 0));
    dp[0][0] = 1;
    for(int i=1 ; i<=n ; ++i){
        for(int sum=0 ; sum<=x ; ++sum){
            dp[i][sum] = dp[i-1][sum]; // not take
            if(sum >= v[i-1]){
                dp[i][sum] = (dp[i][sum] + dp[i][sum-v[i-1]]) % mod;
            }
        }
    }
    cout << dp[n][x] << "\n";
    
    return 0;
}