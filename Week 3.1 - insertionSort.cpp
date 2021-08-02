/*Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts ( shifts - total number of times the array elements are shifted from their place) required for sorting the array.  
Input Format: The first line contains number of test cases, T. For each test case, there will be two input lines. First line contains n (the size of array). Second line contains space-separated integers describing array.  
Output Format: The output will have T number of lines. For each test case T, there will be three output lines. First line will give the sorted array. Second line will give total number of comparisons. Third line will give total number of shift operations required.  */

#include<iostream>
using namespace std;


void insertionSort(int arr[], int n)
{
	int i,j,comparison = 0, shifts = 0;
	int min;
	for (i = 1; i < n; i++)
	{
		min = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > min)
		{
			comparison++;
			shifts++;
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		shifts++;
		arr[j + 1] = min;
	}
	//printing
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl<<"Comparisons = "<<comparison<<"\nShifts = "<<shifts<<endl;
}

int main()
{
	int i, n,testCase;
	int arr[100];
	cin>>testCase;
	while(testCase>=1){
		testCase--;
		//input size
		cin>>n;
		//input arr elem
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		insertionSort(arr, n);
	}
	return 0;
}
