/*
https://onlinejudge.u-aizu.ac.jp/problems/ITP1_9_C
*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

     int user1=0;
     int user2=0;
    for(int i=0;i<n;i++)
    {
       
         string a,b;
         cin>>a>>b;
        // CHECK lexicographical order
         if(a>b)
         {
            user1=user1+3;
         }
         else if(a<b)
         {
             user2=user2+3;
         }
         else if(a==b)
         {
              user1=user1+1;
              user2=user2+1;
         }

    }
       
     cout<<user1<<" "<<user2<<endl;  


     return 0;

   
}

