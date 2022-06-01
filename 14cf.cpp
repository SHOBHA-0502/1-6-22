#include<bits/stdc++.h>
using namespace std;
 int main(){
  int n ;
  cin>>n ;
  int arr[n];
  for(int i =0 ; i<n ; i++){
      cin>>arr[i];
  }
  int m = INT_MIN;
  int min_ind ;
  int k = INT_MAX;
  int max_ind ;
  for(int i =0 ; i<n ; i++){
      if(arr[i]>m){
          m = arr[i];
          max_ind=i;
      }
      if(arr[i]<=k){
          k = arr[i];
          min_ind=i;
      }
  }

  int desmin =0;
  int demax = n-1;
  int ans ;
  if(max_ind<min_ind){
      ans = (demax-min_ind ) + (max_ind-0);
  }
  else{
      ans = (demax-min_ind ) + (max_ind-0) -1;
  }
 
 
   cout<<ans;  
 }