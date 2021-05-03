#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
#define N NULL

int main()
{

int n,k ;
cin>>n>>k ;
int arr[n];
vector<int>v ;
for(int i=0;i<n;i++)
{
      cin>>arr[i] ;
      arr[i]+=k ;
}

for(auto u:arr)
{
      if(u<=5)
      {
            v.push_back(u);
      }
}
cout<<v.size()/3;

}
