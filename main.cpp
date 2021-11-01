#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{

    string s; int c=0; int flag=0;
    cin>>s;

    int slen=s.length();

    for(int i=0;i<slen;i++)
    {
        if(s[slen-1]=='6')
        {
            flag=1;
        }
        if(s[i]!='6')
        {
            c++;
        }

    }

   if(flag==0)
    cout<<c<<"\n";
   else
    cout<<"-1"<<"\n";

}

