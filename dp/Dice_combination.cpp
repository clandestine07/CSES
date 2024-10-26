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

    int n;
    cin>>n;
    vi dp(n+1,0);
    dp[0] = 1;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=6 ; j++){
            if(i >= j){
                dp[i] = (dp[i] + dp[i-j]) % Mod;
            }
        }
    }
    cout << dp[n] << endl;

    return 0;
}