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
        string s,k,l;
        cin>>s>>k>>l;
        string ss="";
        bool ok=1;
        if(s[1]=='>')
            reverse(s.begin(),s.end());
        if(k[1]=='>')
            reverse(k.begin(),k.end());
        if(l[1]=='>')
            reverse(l.begin(),l.end());
            ///cout<<"8888888888888888888888888**********8"<<endl;
             ///cout<<s<<endl<<k<<endl<<l<<endl;
        if(s[0]==k[0] or s[0]==l[0]){
            ss=ss+s[0];
            ok=0;
        }
        else if(k[0]==l[0]){
            ss=ss+k[0];
            ok=0;
        }
        bool go=1;/// KEEP STRONG AND DONT STOP YOU WILL DO IT///
        string kk="";
        if(s[2]==k[2] or s[2]==l[2]){
            ss=ss+s[2];
            go=0;
        }
        else if(k[2]==l[2]){
            ss=ss+k[2];
            go=0;
        }
        if(ss=="AB")
            ss="ACB";
        else if(ss=="BA")
            ss="BCA";
        else if(ss=="AC")
            ss="ABC";
        else if(ss=="CA")
            ss="CBA";
        else if(ss=="BC")
            ss="BAC";
        else if(ss=="CB")
            ss="CAB";
        ///cout<<ss<<endl;
        if(!ok and !go){
            cout<<ss;

        }
        else{
            cout<<"Impossible";
        }


    }
    return 0;
}
