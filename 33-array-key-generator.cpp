#include <iostream> 
#include <cstdlib> 
 
using namespace std; 
 
int RandomNumber(int From, int To) 
{ 
  
int RandNum = rand() % (To - From + 1) + From; 
 return RandNum; 
} 
 
enum enCharTayp { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 }; 
 
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
 
int ReadPositiveNumber(string Message) 
{ 
 int Number; 
 do 
 { 
  cout << Message << endl; 
  cin >> Number; 
 } while (Number < 0); 
 
 return Number;
}
string GenerateWord(enCharTayp CharType, short Length) 
{ 
string Word; 
for (int i = 1; i <= Length; i++)
{ 
Word += GetRandomCharacter(CharType); 
} 
return Word; 
}
string GenerateKey(int Length) 
{ 
string Key = ""; 
for(int i=0;i<Length;i++){
	if(i!=Length)
Key = GenerateWord(enCharTayp::CapitalLetter, 4) + "-";
else Key = Key + GenerateWord(enCharTayp::CapitalLetter, 4); 
}
return Key; 
} 
void GenerateKeys(short NumberOfKeys,int arr[100]) 
{ 
for (int i = 1; i <= NumberOfKeys; i++) 
{ 
cout << "Array [" << i << "] : " <<FillArrayWithKeysNumbers(arr,NumberOfKeys) << endl; 
} 
} 
void FillArrayWithKeysNumbers(int arr[100],int Length){
	for(int counter=0;counter<Length;counter++){
		arr[counter]=GenerateKey(Length);
	}
	
}
void PrintArry(int arr[100],int Length){
	cout<<"Original array: "<<"\n";
	for(int counter=0;counter<Length;counter++){
		cout<<arr[counter]<<endl;
	}
	
}
int main() 
{ 
srand((unsigned)time(NULL)); 
int arr[100];
int Length=ReadPositiveNumber("Enter number of Keys: \n");
GenerateKeys(Length);

}
