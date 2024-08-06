#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,k;cin>>s>>k;
    reverse(s.begin(),s.end()),reverse(k.begin(),k.end());
    int ss=s.size(),kk=k.size();
    ///cout<<kk<<endl;
    int cnt=abs(ss-kk);
    if(s==k){
        cout<<0<<"\n";
        return 0;
    }

    if(ss>kk)
        s.erase(kk);
    else if(kk>ss)
        k.erase(ss);
    ///cout<<kk<<endl;
    //cout<<ss<<endl<<kk<<endl<<s<<endl<<k<<endl;
    if(s!=k){
    while(true){
        //cout<<"hi"<<endl;
        s.pop_back();
        k.pop_back();
        cnt+=2;
        if(s==k)break;
    }

    }
    cout<<cnt;
    return 0;
}
