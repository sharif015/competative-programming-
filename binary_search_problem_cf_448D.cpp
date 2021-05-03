
#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
 int n,m,k ;
 cin>>n>>m>>k ;
 vector<ll>v;
 for(ll i=1 ;i<=n ;i++)
 {

       for(ll j=1;j<=m ;j++)
       {
         ll a=i*j ;
          v.push_back(a);
       }
 }
 sort(v.begin(),v.end());
 cout<<v[k-1];
}
