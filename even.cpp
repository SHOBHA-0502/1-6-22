#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main(){
  ll t ;
  cin>>t ;
  while(t--){
     ll n ;
     ll k;
     cin>>n>>k;
     vector<int>v;

    if(k==1){
        cout<<n<<endl;
    }
    if(k==2){
        cout<<"1"<<endl;
    }
    int f = n-k;
    for(int i=0;i<f;i++){
        v.push_back(i+1);
    }
    if(v.size()>1){
         ll z= (k-v.size())%k;
          z=z-1;
    
          v.erase(v.begin()+z);
    }
     if(v[0]%2==0){
          cout<<"EVEN"<<endl;
      }
      else{
          cout<<"ODD"<<endl;
      }
  }
  }
 
     
 