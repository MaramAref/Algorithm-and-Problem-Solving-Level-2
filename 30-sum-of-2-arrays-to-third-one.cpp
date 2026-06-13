#include <iostream> 
#include <cstdlib> 
using namespace std; 
 
int RandomNumber(int From, int To) 
{ 
 
 int RandNum = rand() % (To - From + 1) + From; 
 return RandNum;  
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
void FillArrayWithRandomNumbers(int arr[100],int &Length){
	for(int counter=0;counter<Length;counter++){
		arr[counter]=RandomNumber(1,100);
	}
	
}
void PrintArry(int arr[100],int Length){
	for(int counter=0;counter<Length;counter++){
		cout<<arr[counter]<<endl;
	}
	
}
	 void SumOf2Arrays ( int sumArrays[100],int arr1[100],int arr2[100],int Length){
	for(int counter=0;counter<Length;counter++){
	sumArrays[counter]=arr1[counter]+arr2[counter];
	}
}

int  main(){
	srand((unsigned)time(NULL));
	 int arr1[100];
	 int arr2[100];
	 int sumArrays[100];
	int Length= ReadPositiveNumber("Enter number of elements: ");
	FillArrayWithRandomNumbers(arr1,Length);
	FillArrayWithRandomNumbers(arr2,Length);
	cout << "\nArray 1 Elements : "<<endl;
	PrintArry(arr1,Length);
	cout<<"Array 2 Elements: "<<"\n";
	PrintArry(arr2,Length);
	cout<<"Sum of array 1 and array 2  elements: \n";
	SumOf2Arrays(sumArrays,arr1,arr2,Length);
	PrintArry(sumArrays,Length);
	return 0;
}
