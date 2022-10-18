/*
https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/power-linear-official/ojquestion
*/

#include<iostream>
using namespace std;

int power(int x,int n){
   // write your code here
   if(n==0)
   {
       return 1;
   }
 int p=power(x,n/2);
 int ans=p*p;
 
 if(n%2==0)
   return ans;
 
  return x*ans;
  
    
}


int main(){
    int n,x; cin>>x>>n;
    cout<<power(x,n);
}
