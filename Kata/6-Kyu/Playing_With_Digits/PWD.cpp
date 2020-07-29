#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;
int solve(int n, int p)
{
  string ns = to_string(n);
  int sum = 0, power = p;
  for(char c : ns)
  {
    sum += pow((c-'0'), power++);
    //power++; The increment operators are powerful
  }
  // if(sum % n == 0)
  // {
  //   return k;
  // }
  // return -1;
  return sum % n == 0 ? sum/n : -1;
}
template<class Ti, class To>
void func(Ti &i, To &o, ifstream &c)
{
  int t  = 0;
  i >> t;
  while(t--)
  {
    int n = 0, p = 0;
    i.ignore(3, '\n');
    i >> n >> p;
    int var = solve(n, p);
    if(c.is_open())
    {
      int ans = 0;
      c >> ans;
      c.ignore(3, '\n');
      cout << "Testing... ";
      if(var != ans)
      {
        cout << "Wrong Answer\n";
        o << "x ";
      }
      else
      {
        cout << "Passed\n";
      }
    }
    o << var << "\n";
  }
}
int main()
{
  ifstream checkFile, inFile("/Users/dreadarceus/github/Codewars/Kata/6-Kyu/Playing_With_Digits/input.txt");
  ofstream outFile;
  if(inFile.is_open())
  {
    checkFile.open("/Users/dreadarceus/github/Codewars/Kata/6-Kyu/Playing_With_Digits/correctOutput.txt");
    outFile.open("/Users/dreadarceus/github/Codewars/Kata/6-Kyu/Playing_With_Digits/output.txt");
    func(inFile, outFile, checkFile);
  }
  else
  {
    func(cin, cout, checkFile);
  }
}
