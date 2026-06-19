#include <iostream> 
#include <cstdlib> 
using namespace std; 
void FillArray(int arr[100], int& arrLength) 
{  
 arrLength = 10; 
 
 arr[0] = 10; 
 arr[1] = 10; 
 arr[2] = 10; 
 arr[3] = 50; 
 arr[4] = 50; 
 arr[5] = 70; 
 arr[6] = 70; 
 arr[7] = 70; 
 arr[8] = 70; 
 arr[9] = 90; 
 
} 
void PrintArray(int arr[100], int arrLength) 
{ 
for (int i = 0; i < arrLength; i++) 
cout << arr[i] << " "; 
cout << "\n"; 
} 
bool IsPalindromeArray(int arr[100],int Length){
for (int i = 0; i < Length; i++) 
 { 
  if (arr[i] != arr[Length - i - 1]) 
  { 
   return false; 
  } 
 } 
 return true;
}
int main(){
	int arr[100];
	int arrLength;
	PrintArray(arr,arrLength);
	if(IsPalindromeArray(arr,arrLength))
	cout<<"Yes array is palindrome\n";
	else 
  cout << "No array is not palindrome \n"; 
}
