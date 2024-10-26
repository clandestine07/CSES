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

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vi v(n);
    for(int &i : v) cin >> i;
    int mod = 1e9+7;
 
    vector<int> dp(x+1, 0);
    dp[0] = 1;
 
    for(int sum=0 ; sum <= x ; ++sum){
        for(int i=0 ; i<n ; ++i){
            if(sum-v[i] >= 0){
                dp[sum] =  (dp[sum] + dp[sum-v[i]]) % mod;
            }
        }
    }
    cout << dp[x] << "\n";

    return 0;
}