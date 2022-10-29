//Bismillah
#include<bits/stdc++.h>
using namespace std ;
int n,c ;
int function_to_check(int length,int arr[])
{
    int cows=1 ,position=arr[0] ;
    for(int i=1;i<n ;i++)
    {
        if((arr[i]-position)>=length)
        {
            cows++ ;
            if(cows==c)
            {
                return 1 ;
            }
            position=arr[i];
        }
    }
    return 0 ;
}
int bs(int arr[])
{
    int l=0 ,h=arr[n-1];
    int max=-1 ;
    while(l<=h)
    {
      int mid=l+(h-l)/2 ;
        if(function_to_check(mid,arr))
        {
           if(max<mid)
           {
               max=mid ;
               l=mid+1 ;
           }
        }
        else
        {
           h=mid-1 ;
        }
    }
    return max ;
}
int main()
{
 int t;
 cin>>t ;
 while(t--)
 {
     cin>>n>>c ;
     int arr[n];
     for(int i=0;i<n ;i++)
     {
         cin>>arr[i] ;
     }
     sort(arr,arr+n);
     cout<<bs(arr);
 }


}

