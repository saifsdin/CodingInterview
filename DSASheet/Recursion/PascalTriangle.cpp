//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
// #define ll long long
class Solution{
 public:

    void pascal(int n, vector<vector<ll>> &ans){
        if(n==1){
            ans[0].push_back(1);
            return;
        }
        pascal(n-1,ans);
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                ans[n-1].push_back(1);
                continue;
            }
            ans[n-1].push_back((ans[n-2][i]+ans[n-2][i-1])%1000000007);
        }
        
    }

    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<ll>> ans(n);
        pascal(n,ans);
        return ans[n-1];
    }   
    
    
public:
vector<ll> nthRowOfPascalTriangle2(int rowIndex) {
         vector<vector<ll>> v;

   for (int i = 0; i < rowIndex; i++)
   {
       vector<ll> ans;
       ans.resize(i + 1);

       for (int j = 0; j < i + 1; j++)
       {
           if (j == 0 || j == i)
           {
               ans[j] = 1;
           }
           else{
               ans[j]=(v[i-1][j-1] % 1000000007 + v[i-1][j] % 1000000007)%1000000007;
           }
       }
    v.push_back(ans);
   }
   return v[rowIndex-1]; 
   }
   // solve by me only 50 test case pass
public:
    vector<ll> nthRowOfPascalTriangle1(int n) {
        // code here
        
        vector<ll> prev;
        int val=1;
       // cout<<"1"<<endl;
        for(int r=1;r<n;r++)
        {
            vector<ll> out;
            if(r==1)
            {
            prev.push_back(val);
           // cout<<val;
             out.push_back(val);
            out.push_back(val);
            
            prev.push_back(val);
          //  cout<<val;
           // cout<<endl;
            }
            else
            {
               // cout<<"1";
                
                out.push_back(1);
                for(int j=0;j<prev.size()-1;j++)
                {
                    int ret=prev[j]+prev[j+1];
                    out.push_back(ret);
                   // cout<<ret;
                }
                out.push_back(1);
               // cout<<"1";
                prev=out;
               // cout<<endl;
                
            }

            if(r==n-1)
            {
                
                return out;
            }
            
        }
         if(n==1)
        {
            prev.push_back(1);
            return prev;
        }
        

        return prev;
    }
};


//{ Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends