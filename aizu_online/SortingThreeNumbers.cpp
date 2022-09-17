/*
https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/2/ITP1_2_C

*/
#include <iostream>
using namespace std;
int main() {

    int arr[1000];
    int n=3;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int l=0,m=1;
    int h=n-1;
    int i=0;
    while(i<h)
    {
        if(arr[l]>arr[m])
        {
            swap(arr[l],arr[m]);
        }
        else if(arr[m]>arr[h])
        {
          swap(arr[m],arr[h]);
        }
        else{
            i++;
        }
       

    }

   cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
    
    return 0;
}