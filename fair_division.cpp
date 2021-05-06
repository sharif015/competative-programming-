#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{
 int t ;
 cin>>t ;

 while(t--)
 {
       int n ;
       cin>>n ;
       int arr[n+3];
       map<int,int>m ;
       for(int i=0 ; i<n ;i++)
       {
             cin>>arr[i];
             m[arr[i]]++ ;
       }
      if((m[1]%2==0 && m[2]%2==0)|| (m[2]%2==1 && m[1]>1 &&m[1]%2==0))
      {
            cout<<"YES" <<endl ;
      }
      else
      {
            cout<<"NO"<<endl ;
      }

 }
}
