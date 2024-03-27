#include <iostream>
#include <vector>
using namespace std;

void Solve(string& digit, vector<string> &ans, string& output, int i, vector<string> &Letter, int currentdigit)
{
  //Base Case
  if(i>=digit.size())
  {
    ans.push_back(output);
    return;
  }

  currentdigit = digit[i] - '0';
  string value = Letter[currentdigit];
  for(int j=0;j<value.size();j++)
    {
      // Pushing letter
      output.push_back(value[j]);
      //Recursive Call
      Solve(digit, ans, output, i+1, Letter, currentdigit);
      //Backtracking
      output.pop_back();
    }
}
int main() {

  string digits = "2";
  vector<string>ans;
  if(digits.length() == 0)
  {
    cout <<  ans[0];
  }
  string output = "";
  int currentdigit = 0;
  int i = 0;

  vector < string> Letter(10);

  Letter[2] = "abc";
  Letter[3] = "def";
  Letter[4] = "ghi";
  Letter[5] = "jkl";
  Letter[6] = "mno";
  Letter[7] = "pqrs";
  Letter[8] = "tuv";
  Letter[9] = "wxyz";

  Solve(digits, ans, output, i, Letter, currentdigit);

  cout << "printing answer: " << endl;
  for(int i=0;i<ans.size();i++){
    cout << ans[i] << " ";
  }
  
  
}