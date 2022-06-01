#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main(){
  ll t ;
  cin>>t ;
  while(t--){
      int x ,y;
      cin>>x >>y;
      int count=0;
      if(x>y){
          if(x%2 ==0 && y%2 ==0 ||x%2 !=0 && y%2 !=0){
            //   cout<<"yes"<<endl;
              int k = x-y;
   
              k =k/2;
            //   cout<<k<<endl;
              count+=k;
            //   cout<<count<<"//"<<endl;
          }
          else if(x%2 !=0 || y%2 !=0){
              x+=1;
              count+=1;
              int k = x-y;
              k =k/2;
              count+=k;

          }
          
           
      }
      if(x<y){
          count+=(y-x);
          
           
      }
     

      cout<<count<<endl;
  }
  }
 
     
 