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

///ll sum=v[k][l]-v[k][j-1]-v[i-1][l]+v[i-1][j-1];

  ///vector<vector<ll>>v(n+1,vector<ll>(m+1));

int main()
{
    int t;cin>>t;
    while(t--){
        long long n;
        long long s;
        cin>>n>>s;
        set<int>st;
        long long sum=n*(n+1)/2;
        if(sum<s){
            cout<<-1;

        }
        else if(n>=s){
            st.insert(s-1),st.insert(1);
        }
        else {
            long long k=s;
            for(long long i=n;i>=1;i--){
                if(k<=0){
                    break;
                }
                if(k>=i){
                    st.insert(i);
                k-=i;

                }
            }
        //cout<<endl;
        }

        if(st.size()!=-1 and st.size()!=0)
        cout<<st.size()<<" ";

        int cnt=st.size();
        if(st.size()!=-1 and st.size()!=0){
            for(auto it:st){
            if(cnt!=1)
            cout<<it<<" ";
            else
            cout<<it;
            --cnt;

        }

        }


        cout<<endl;
    }
    return 0;
}
