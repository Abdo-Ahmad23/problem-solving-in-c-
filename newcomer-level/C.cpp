#include <bits/stdc++.h>
using namespace std;
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define ll long long
#define dd double
#define lli long long int
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define endl "\n"
#define pi 3.142857143
#define rep(i,a,b) for(int i = a; i < b; i++)

ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void strong1()
{
  cin.tie(NULL);cout.tie(NULL);
  ios_base::sync_with_stdio(false);
  #ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
  #endif
}
	enum dir    { d, r, u, l, ul, dr, ur, dl};
	int dx[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dy[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };
int const NN=1e6;
bool isprime[NN];
void seive(){
    memset(isprime,true,sizeof isprime);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<NN;i++){
        if(isprime[i]){
            for(int j=i*i;j<NN;j+=i){
                isprime[j]=false;
            }
        }
    }
}
bool pal(string s){
bool ok=0;
int n=s.size();
for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-1-i]){
        ok=1;
        break;
    }
}
if(ok)
    return false;
else
    return true;
}

///ll sum=v[k][l]-v[k][j-1]-v[i-1][l]+v[i-1][j-1];

  ///vector<vector<ll>>v(n+1,vector<ll>(m+1));
//pal_clock
int a[5] = {600, 60, 0, 10, 1};
int good[16] = {0, 70, 140, 210, 280, 350, 601, 671, 741, 811, 881, 951, 1202, 1272, 1342, 1412};

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    ll sum1=0;
    for(int i=0;i<n;i++){
            cin>>a[i];
    sum1+=a[i];
    //cout<<sum1<<endl;

    }
    int aa[k];
    for(int i=0;i<k;i++){
        cin>>aa[i];
        sum1 -=aa[i];
    }
    //cout<<sum1<<endl;
    if(sum1==0)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    return 0;
}
