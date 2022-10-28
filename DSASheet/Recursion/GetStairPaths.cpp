/*
https://www.pepcoding.com/resources/online-java-foundation/recursion-with-arraylists/get-stair-paths-official/ojquestion
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;



vector<string> get_stair_paths(int n) {
 
    if (n == 0) {                                      //1.1
      vector<string> bres;
      bres.push_back("");
      return bres;
    } else if (n < 0) {
      vector<string> bres;      //1.2
      return bres;
    }
    
   vector<string> paths1= get_stair_paths(n-1);
   
   vector<string> paths2= get_stair_paths(n-2);
   
   vector<string> paths3= get_stair_paths(n-3);
   
    
    vector<string> out;          //3

    for (auto path : paths1) {
      out.push_back("1" + path);                               //4.1
    }
    for (auto path : paths2) {
      out.push_back("2" + path);                               //4.2
    }
    for (auto path : paths3) {
      out.push_back("3" + path);                               //4.3
    }
    return out;  
}

int main() {
  int n;
  cin >> n;
  vector<string> ans = get_stair_paths(n);
  int cnt = 0;

  cout << '[';
  for (string str : ans) {
    if (cnt != ans.size() - 1)
      cout << str << ", ";
    else
      cout << str;
    cnt++;
  }
  cout << ']';
}