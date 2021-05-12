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
    map<char,int>m ;
    char arr[n+1];
    for(int i=0 ;i<n ;i++)
    {
        cin>>arr[i];
        m[arr[i]]++ ;
    }
    int c=0 ;
for(int i=0 ;i<n ;i++)
{
    if(arr[i]==arr[i+1])
    {
        c++ ;
    }
    else
    {
        if(c<m[arr[i]])
        {
            cout<<"NO" <<endl ;
        }
        else
        {
            cout<<"Yes"<<endl ;
        }
    }
}


}
}
