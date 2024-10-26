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
    vector<int> v(n);
    for (int &i : v) cin >> i;
 
    vi dp(x + 1, 1e9);
    dp[0] = 0;
    for (int sum = 1; sum <= x; sum++){
        for (int j = 0; j < n; j++){
            if (sum - v[j] >= 0 && sum >= v[j]){
                dp[sum] = min(dp[sum], dp[sum - v[j]] + 1);
            }
        }
    }
    cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;

    return 0;
}