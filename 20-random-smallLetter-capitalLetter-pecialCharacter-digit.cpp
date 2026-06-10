#include <iostream> 
#include <cstdlib> 
using namespace std; 
int RandomNumber(int From, int To) 
{ 
 int RandNum = rand() % (To - From + 1) + From;  
 return RandNum; 
}  
enum enCharTayp {SmallLetter = 1, CapitalLetter = 2 , SpecialCharacter = 3, Digit = 4}; 
 
char GetRandomCharacter(enCharTayp CharType) 
{ 
 switch (CharType) 
 { 
 
 case enCharTayp::SmallLetter: 
 { 
  return char(RandomNumber(97, 122)); 
  break; 
 } 
 
 case enCharTayp::CapitalLetter: 
 { 
  return char(RandomNumber(65, 90)); 
  break; 
 } 
 
 case enCharTayp::SpecialCharacter: 
 { 
  return char(RandomNumber(33, 47)); 
  break; 
 } 
 
 case enCharTayp::Digit: 
 { 
  return char(RandomNumber(48, 57)); 
  break; 
 } 
 
 } 
} 
int main() 
{ 
 srand((unsigned)time(NULL)); 
 
 cout << GetRandomCharacter(enCharTayp::SmallLetter) << endl; 
 cout << GetRandomCharacter(enCharTayp::CapitalLetter) << endl; 
 cout << GetRandomCharacter(enCharTayp::SpecialCharacter) << endl; 
 cout << GetRandomCharacter(enCharTayp::Digit) << endl; 
} 
