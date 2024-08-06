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
bool one,two;
void solve()
{
    string s;cin>>s;
    int as=0,q=0;
    for(int i=0;i<s.size();i++){
        as+=(s[i]=='*');
        q+=(s[i]=='?');
    }
    int sz=s.size()-q-as;
    int x;cin>>x;
    if(x<sz){/// remove
        if(sz-as-q<=x){
            int k=sz-x;
            for(int i=0;i<s.size();i++){
                if((s[i+1]=='*' or s[i+1]=='?') and k)k--;
                else if(s[i]!='*' and s[i]!='?')cout<<s[i];
            }
        }
        else{
            cout<<"Impossible"<<endl;
            return;
        }
    }
    else if(x!=sz){
        if(as==0){
            cout<<"Impossible"<<endl;
            return;
        }
        else{
            int k=x-sz+1;
            bool ok=0;
            for(int i=0;i<s.size();i++){
                if(s[i+1]=='*' and !ok){
                    while(k--){
                        cout<<s[i];

                    }
                    ok=1;
                }
                else if(s[i]!='*' and s[i]!='?')cout<<s[i];

            }
        }
    }
    else {
        for(int i=0;i<s.size();i++){
            if(s[i]!='?' and s[i]!='*')cout<<s[i];
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
