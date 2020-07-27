#include <string>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  //your code here
  for(char c : inputStr) //for loop across the given string.
  {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') //checking for any of the 5 vowels
    {
      num_vowels++;
    }
  }
  return num_vowels;
}
