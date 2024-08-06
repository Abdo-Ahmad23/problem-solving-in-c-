#include <bits/stdc++.h>

using namespace std;

int main()
{


    string s,k;cin>>s>>k;
    if(s.size()-k.size()!=0){
        cout<<"NO"<<"\n";
        return 0 ;
    }
//    if(s==k){
//        cout<<"YES"<<endl;
//        continue ;
//    }
    bool ok=0;
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]==s[j]){
                ok=1;
                break;
            }
        }
    }
    if(ok and s==k){
        cout<<"YES"<<endl;
        return 0;
    }
    if(!ok and s==k){
        cout<<"NO"<<endl;
        return 0;
    }
    int cnt=0;
    int cc=0,ccc=0;
    bool okk=0;
    for(int i=0;i<(int)s.size();i++){
        if(s[i]!=k[i]){
            cnt++;
            if(okk==0){
                cc=i;
                okk=1;
            }
            if(cnt==2){
                ccc=i;
                break;
            }
        }

    }
    swap(s[cc],s[ccc]);
    if(s==k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    ///cout<<cnt<<endl;



    return 0;
}
