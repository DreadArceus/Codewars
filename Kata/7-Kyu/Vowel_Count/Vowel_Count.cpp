#include <iostream>
#include <fstream>
#include <string>
//#include <cstdio>
using namespace std;
bool isVowel(char c)
{
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int getCount(const string& inputStr){
  int num_vowels = 0;
  //your code here
  for(char c : inputStr) //for loop across the given string.
  {
    if(isVowel(c)) //checking for any of the 5 vowels
    {
      num_vowels++;
    }
  }
  return num_vowels;
}

int main()
{
  //freopen ("/Users/dreadarceus/github/Codewars/Kata/7-Kyu/output.txt","w",stdout);
  //freopen ("/Users/dreadarceus/github/Codewars/Kata/7-Kyu/input.txt","a",stdin);
  int t = 0;
  ifstream inFile("/Users/dreadarceus/github/Codewars/Kata/7-Kyu/Vowel_Count/input.txt");
  ofstream outFile("/Users/dreadarceus/github/Codewars/Kata/7-Kyu/Vowel_Count/output.txt", ios::trunc);
  inFile >> t;
  inFile.ignore(10, '\n');
  while(t--)
  {
    string s  = "";
    getline(inFile, s);
    int ans = getCount(s);
    outFile << ans << "\n";
  }
}
