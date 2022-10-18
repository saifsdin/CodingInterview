/*
https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/print-increasing-official/ojquestion
*/

#include<iostream>
using namespace std;

void printIncreasing(int n){
    // write your code here
    if(n<1)
    {
        return;
    }
    printIncreasing(n-1);
    
    cout<<n<<endl;
}


int main(){
    int n; cin>>n;
    printIncreasing(n);
}
