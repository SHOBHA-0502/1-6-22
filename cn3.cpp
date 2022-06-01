#include <iostream>
#include <math.h>
using namespace std;
// int k =0;
// int stringtonumber_helper(char input[],int len){

    
//     if(len==1){
//         int a = input[0]-'0';
//         return  a;
//     }

//      k =  (input[0]-'0')*pow(10,len-1);
//     cout<<k<<"//"<<endl;
    
//     return k + stringtonumber_helper(input+1,len-1);
    
    
// }
// int  stringToNumber(char input[]) {
//     int vount =0;
//     for(int i =0 ; input[i]!='\0';i++){
//         vount++;
//     }
    
//     return  stringtonumber_helper(input,vount);
    
// }
#include<bits/stdc++.h>
int stringToNumber(char arr[]) {
    // Write your code here
    if (strlen(arr)==1){
        int c=arr[0]-'0';
        return c;
    }
    int a = stringToNumber(arr+1);
    int b=arr[0]-'0';
    int ans=b*pow(10,strlen(arr)-1)+a;
    return ans;
}
 
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}