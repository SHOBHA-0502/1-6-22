#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main(){
  ll t ;
  cin>>t ;
  while(t--){
      ll pa ,pb,qa,qb;
      cin>>pa>>pb>>qa>>qb;
    ll a =max(pa,pb);
      ll b = max(qa,qb);
      if(a>b){
          cout<<"Q"<<endl;
      }
      else if(b>a){
          cout<<"P"<<endl;
      }
      else{
           cout<<"TLE"<<endl;
      }
  }
  }
 
     
 