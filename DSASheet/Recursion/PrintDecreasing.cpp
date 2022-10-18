/*
https://www.pepcoding.com/resources/online-java-foundation/introduction-to-recursion/print-decreasing-official/ojquestion
*/

#include <iostream>
using namespace std;

void printDecreasing(int n){
    // write your code here
    if(n<1)
    {
        return;
    }
    cout<<n<<endl;
printDecreasing(n-1);

}

int main(){
    int n;
    cin >> n;
    printDecreasing(n);
}
