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
#define int long long
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void solve()
{
    int n;cin>>n;
    vector<int>v(n);
    int x,on=0,blue=0,id,ans=0;
    for(int i=0;i<n;i++){
        cin>>id;
        x=id-1;
        v[x]=1;
        on++;
        while(x<n and v[x]>0 and (x==0 or v[x-1]==2)){
            if(v[x]==1)blue++;
            v[x++]=2;
            
        }
        ans+=(on==blue);

    }
    cout<<ans<<endl;

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
