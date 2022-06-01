#include<bits/stdc++.h>
using namespace std;
 int main(){
  int n ;
  cin>>n ;
  vector<int>v(n);
  if(n%2!=0){
      cout<<-1;

  }
  else{
       for(int i =0;i<=n;i++){
            if(i%2==0){
                v[i]=i+2;
            }
            else{
                v[i]=i+1-1;
            }
       }
        for(int i =0 ; i<n ; i++){
      cout<<v[i]<<" ";
  }
  }
 
     
 }