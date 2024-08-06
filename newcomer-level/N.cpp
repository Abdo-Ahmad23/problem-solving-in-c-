#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long eye,mouth,body;
    cin>>eye>>mouth>>body;
    long long cnt=0;
    cnt+=min(mouth,min(body,eye/2));
    ///cout<<cnt<<endl;
    mouth-=cnt,body-=cnt,eye-=cnt;
    if(mouth<0)mouth=0;
    if(body<0)body=0;
    if(eye<0)eye=0;
    long long mn=min(body,min(eye,mouth));
    body-=mn,eye-=mn,mouth-=mn;
    cnt+=mn;
    if(mouth<0)mouth=0;
    if(body<0)body=0;
    if(eye<0)eye=0;
    mn=min(eye/2,body);
    ///cout<<cnt<<endl;
    mouth-=mn,body-=mn;
    if(mouth<0)mouth=0;
    if(body<0)body=0;
    if(eye<0)eye=0;
    cnt+=mn;
    cout<<cnt<<endl;
    return 0;
}
