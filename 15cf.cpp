#include<bits/stdc++.h>
using namespace std;
 int main(){
     int n ;
     cin>>n ;
     float arr[n];
     for(int i =0 ; i<n ; i++){
         cin>>arr[i];
     }
     float sum = 0;
      for(int i =0 ; i<n ; i++){
         sum+=arr[i];
     }
     float k = sum/n;
    cout << k;

     
 }