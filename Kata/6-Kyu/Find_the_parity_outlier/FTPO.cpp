#include <iostream>
#include <fstream>
using namespace std;
int solve(int a[], int n)
{
  if((a[0] % 2 == 0 && a[1] % 2 == 0)
    || (a[0] % 2 == 0 && a[2] % 2 == 0)
    || (a[1] % 2 == 0 && a[2] % 2 == 0))
  {
    for(int i = 0; i < n; i++)
    {
      if(a[i] % 2 != 0)
      {
        return a[i];
      }
    }
  }
  else
  {
    for(int i = 0; i < n; i++)
    {
      if(a[i] % 2 == 0)
      {
        return a[i];
      }
    }
  }
}
int main()
{
  int t = 0;
  ifstream inFile("/Users/dreadarceus/github/Codewars/Kata/6-Kyu/Find_the_parity_outlier/input.txt");
  ifstream checkFile("/Users/dreadarceus/github/Codewars/Kata/6-Kyu/Find_the_parity_outlier/correctOutput.txt");
  ofstream outFile("/Users/dreadarceus/github/Codewars/Kata/6-Kyu/Find_the_parity_outlier/output.txt");
  outFile << "...\n";
  inFile >> t;
  while(t--)
  {
    int n = 0;
    inFile.ignore(3, '\n');
    inFile >> n;
    inFile.ignore(3, '\n');
    int a[n];
    for(int i = 0; i < n; i++)
    {
      inFile >> a[i];
    }
    int var = solve(a, n);
    int ans = 0;
    checkFile >> ans;
    checkFile.ignore(3, '\n');
    cout << "Testing... ";
    if(var != ans)
    {
      cout << "Wrong Answer\n";
      outFile << "xxx ";
    }
    else
    {
      cout << "Passed\n";
    }
    outFile << var << "\n";
  }
}
