using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.
  
  int index=0;
  
  for(int i=0;i<sequence.size();i++)
    {
      bool check=false;
      for(int j=index;j<array.size();j++)
        {
          if(sequence[i]==array[j])
          {
            index=j+1;
            check=true;
            break;
          }
          else
          {
            check=false;
          }

      if(check==false)
      {
        return false;
      }
        }

      
    }
  return true;
}
