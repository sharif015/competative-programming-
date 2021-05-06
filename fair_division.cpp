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
int a=0,b=0;

       for(int i=0 ; i<n ;i++)
       {

            int k ;
            cin>>k ;
     if(k==1)
     {
           a++ ;
     }
     else
     {
           b++ ;
     }

       }

      if((a%2==0 && b%2==0)|| (b%2==1 && a>1 && a%2==0))
      {
            cout<<"YES" <<endl ;
      }
      else
      {
            cout<<"NO"<<endl ;
      }

 }
}
