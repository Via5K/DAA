/*
Given an unsorted array of integers, design an algorithm and implement a program to sort this array using selection sort. Your program should also find number of comparisons and number of swaps required.  
Input Format: The first line contains number of test cases, T. For each test case, there will be two input lines. First line contains n (the size of array). Second line contains space-separated integers describing array.  
Output Format: The output will have T number of lines. For each test case T, there will be three output lines. First line will give the sorted array. Second line will give total number of comparisons. Third line will give total number of swaps required. 
*/

#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){
	int swaps=0,comparisons=0,i,j,min,temp;
	for(i=0;i<n-1;i++){
		swaps++;
		min = arr[i];
		for(j=i+1;j<n;j++){
			comparisons++;
			if(arr[j]<min){
				min = arr[j];
				//when minimum found then swap them
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//print
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl<<"Comparisons = "<<comparisons<<"\nShifts = "<<swaps<<endl;
}


int main(){
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
		selectionSort(arr, n);
	}
	return 0;
}
