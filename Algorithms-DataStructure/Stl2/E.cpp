///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define ull unsigned long long
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define ll long long
#define pi 3.14159265358979323846264338327950288419716939937510
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
#define int long long
bool is_sub(string &all,string &s)
{
    for(int i=0;i<s.size();i++){
        if(all[i]!=s[i])return 0;
    }
    return 1;

}
void solve()
{
   string s;cin>>s;
   int n=10;
   string a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   while(!s.empty()){
   for(int i=0;i<n;i++){
//    cin>>a[i];
    if(is_sub(s,a[i])){
        cout<<i;
        int t=10;
        while(t--){
            s.erase(0,1);
        }

    }
   }


   }
}
int32_t main()
{
    fast
    int t=1;//cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}
