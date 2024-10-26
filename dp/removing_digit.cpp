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
#define vii vector<vector<int> >
#define vl vector<long long>
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vi dp(n+1);
    // dp[i] = steps required to make the number zero from i
    dp[0] = 0;
    for(int i=1 ; i<=n ; ++i){
        int temp = i;
        int minSteps = 1000001;
        while(temp != 0){
            int digit = temp % 10;
            temp /= 10;
            if(digit == 0) continue;
            minSteps = min(minSteps, 1 + dp[i-digit]);
        }
        dp[i] = minSteps;
    }
 
    cout << dp[n] << "\n";
 
    return 0;
}