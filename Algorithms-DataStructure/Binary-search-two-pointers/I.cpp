///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long
int n;
vector<int>Vmn,Vmx,a;

void solve()
{
    cin>>n;
    a.resize(n);
    int mx=0,mn=INT_MAX;
    for(int i=0;i<n;i++)cin>>a[i],mn=min(mn,a[i]),mx=max(mx,a[i]);
    for(int i=0;i<n;i++){
        if(a[i]==mn)Vmn.pb(i);
        if(a[i]==mx)Vmx.pb(i);
    }
    
    mn=INT_MAX;
    for(int i=0;i<Vmn.size();i++){
        auto c=lower_bound(all(Vmx),Vmn[i]);
        mn=min(abs(*c-Vmn[i]),mn);
    }
    for(int i=0;i<Vmx.size();i++)
    {
        auto c=lower_bound(all(Vmn),Vmx[i]);
        mn=min(mn,abs(*c-Vmx[i]));
    }
    cout<<mn;

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
