#include<bits/stdc++.h>
using namespace std;
 int main(){
  
     string m ,n;
     cin>>m >>n;
     string k="";
      
     for(int i =0 ; i<m.size();i++){
         if(m[i] !=n[i]){
             k +='1';
         }
         else{
             k+='0';
         }
     }
   cout<<k;
     
 }