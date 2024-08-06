#include <bits/stdc++.h>

using namespace std;
char value(char n){
char ch='9'-n;
if(ch>n)
    return ch;
return n;
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--){
        string s;cin>>s;
        int ss=s.size();
        for(int i=0;i<ss;i++){
            int n=s[i]-'0';
            int nn=9-n;
            if(s[i]<='4')
                cout<<s[i];
            else if(s[i]=='9' and i==0)
                cout<<'9';
            else if(n<=nn)
                cout<<n;
            else if(nn<=n and nn>=0 and nn<=9)
                cout<<nn;


        }

    }
    return 0;
}
