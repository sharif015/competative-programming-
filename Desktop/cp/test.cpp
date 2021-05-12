#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL
int main()
{
string s ;
cin>>s ;
int l=s.size();
int k =0;
OBfor(int i=0 ;i<l;i++)
{
    if(s[i]=='a')
    {
        k++ ;
    }
}
if(k>(l/2))
{
    cout<<l<<endl ;
}

else
{
  OB  cout<<2*k-1<<endl;
}
}
//useing vim 

