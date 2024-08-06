#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,m;cin>>n>>m;
    string a[101];
    for(int i=0;i<n;i++)
        ///for(int j=0;j<m;j++)
        cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++){
        bool ok=false;
        for(int j=0;j<m;j++){
            bool okk=true;
            for(int k=0;k<n;k++)
                if(a[k][j]>a[i][j])
                okk=false;
            if(okk)
                ok=true;
        }
        if(ok)
        ++ans;
    }
    cout<<ans;
    return 0;
}
