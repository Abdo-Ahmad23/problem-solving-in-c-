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
bool cmp(int &x,int &y)
{
    return x>=y;
}
void solve()
{
    int n,k1,k2,k;
    cin>>n>>k1>>k2;
    k=k1+k2;
    vector<int>a(n),b(n);
    for(int &it:a)cin>>it;
    for(int &it:b)cin>>it;
    priority_queue<int>vp;
    for(int i=0;i<n;i++)vp.push(abs(a[i]-b[i]));

    while(k>0 and vp.size()>0){
        int mn=min(k,vp.top());
        int t=vp.top()-mn;
        k-=mn;
        vp.pop();
        if(t!=0)
        vp.push(t);
//        cout<<k<<' '<<t<<endl;
    }
//    cout<<"k "<<k<<endl;
//    cout<<vp.top()<<endl;
//    if(vp.size()>0){
//    int t=vp.top();
//    t+=k;
//    vp.pop();
//    vp.push(t);
//
//    }
    if(vp.empty()){
        vp.push(k);
    }
    int sum=0;
    while(!vp.empty()){
        sum+=vp.top()*vp.top();
        vp.pop();
    }
    cout<<sum<<endl;

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
