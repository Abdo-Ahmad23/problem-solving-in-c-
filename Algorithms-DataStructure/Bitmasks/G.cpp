///*89لهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقا*///
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fast cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);
#define int long long
void solve()
{
    int n;cin>>n;

    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)cin>>a[i][j];
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
    int r=0;
    for(int j=0;j<n;j++)
    {
        if(i!=j)r|=a[i][j];
    }
       ans.pb(r);
    }
    for(auto it:ans)cout<<it<<' ';
}
int32_t main()
{
    fast
    int t=1;///cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";

        solve();
    }
    return 0;

}
