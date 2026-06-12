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
void CopyInArray(int copyarr[100],int arr[100],int Length){
	for(int counter=0;counter<Length;counter++){
		copyarr[counter]=arr[counter];
	}
}

int  main(){
	srand((unsigned)time(NULL));
	 int arr[100];
	 int copyarr[100];
	int Length= ReadPositiveNumber("Enter number of elements: ");
	FillArrayWithRandomNumbers(arr,Length);
	cout << "\nArray Elements : "<<endl;
	PrintArry(arr,Length);
	cout<<"Array 2 Elements after copy  "<<"\n";
	CopyInArray(copyarr,arr,Length);
	PrintArry(copyarr,Length);
	return 0;
}
