///*اللهم أنت عضدي ، وأنت نصيري ، بك أحولُ وبك أصولُ ، وبك أقاتلُ*///
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define endl "\n"
#define ll long long
#define pi 3.14159265358979323846264338327950288419716939937510
#define int long long
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void strong1(){cin.tie(NULL);cout.tie(NULL);ios_base::sync_with_stdio(false);}
int const NN=1e6;bool isprime[NN];void seive(){memset(isprime,true,sizeof isprime);isprime[0]=isprime[1]=false;for(int i=2;i*i<NN;i++)if(isprime[i])for(int j=i*i;j<NN;j+=i)isprime[j]=false;}
bool pal(string s){int n=s.size();for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i])return 0;return 1;}
long long power(int a,int b){if(a==1)return a;if(b==0)return 1;int ret=power(a,b/2);ret*=ret;if(b%2)ret*=a;return ret;}
string to_binary(int n){string s="";while(n){char ch;int nn=n%2;n/=2;ch='0'+nn;s=ch+s;}return s;}int getbit(int n,int idx){return ((n>>idx)&1)==1;}
int setbit(int n,int idx){return n|(1<<idx);}int BFO(int n){return (n&(n-1));}int NBFO(int n){return (n&(-n));}int check_if_pow2(int num){return (num&&!(num&(num-1)));}
int setbit0(int n,int idx){return (n&~(1<<idx));}int flipbit(int n,int idx){return (n^(1<<idx));}
///*-------------------------------------------*///
enum dir    { d, r, u, l, ul, dr, ur, dl};
int dx[4] = { 1, 0, 1, 0};
int dy[4] = { 0, 1, 1, -1};
///*-------------------------------------------*///
struct point{
int row,cul,to;
};
bool check[105][105];
void solve(){
    vector<point>ans;
    int n,m;cin>>n>>m;
    char a[n+1][m+1];
    for(int x=1;x<=n;x++){
        for(int y=1;y<=m;y++){
        cin>>a[x][y];
        }
        }

    for(int x=1;x<=n;x++){
        for(int y=1;y<=m;y++){

    if(a[x][y]=='*'){
    int c1=0;
    for(int i=y+1;i<=m;i++){
        if(a[x][i]=='*')c1++;
        else break;
    }
    int c2=0;
    for(int i=x-1;i>=1;i--){
        if(a[i][y]=='*')c2++;
        else break;
    }
    int c3=0;
    for(int i=y-1;i>=1;i--){
        if(a[x][i]=='*')c3++;
        else break;
    }
    int c4=0;
    for(int i=x+1;i<=n;i++){
        if(a[i][y]=='*')c4++;
        else break;
    }
    int res= min({c1,c2,c3,c4});
    if(res!=0){
        check[x][y]=true;
        int cnt=1;
        for(int i=y+1;cnt<=res;cnt++,i++){
        check[x][i]=true;
    }
        cnt=1;
       for(int i=x-1;i>=1 && cnt<=res;cnt++,i--){
        check[i][y]=true;
    }
    cnt=1;
     for(int i=y-1;i>=1 && cnt<=res;cnt++,i--){
        check[x][i]=true;
    }
    cnt=1;
    for(int i=x+1;i<=n && cnt<=res;cnt++,i++){
        check[i][y]=true;
    }
    }
    point rabee={x,y,res};
    if(res!=0){
        ans.PB(rabee);
    }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='*'){
                if(check[i][j]==0){
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }

    cout<<ans.size()<<endl;
    for(auto it:ans)cout<<it.row<<' '<<it.cul<<' '<<it.to<<endl;

}
int32_t main()
{
    strong1();
    int t=1;///cin>>t;
    for(int i=1;i<=t;i++){
        ///cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;

}