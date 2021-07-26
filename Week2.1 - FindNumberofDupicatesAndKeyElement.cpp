/*Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))  Input format: The first line contains number of test cases, T. For each test case, there will be three input lines. First line contains n (the size of array). Second line contains space-separated integers describing array. Third line contains the key element that need to be searched in the array.  Output format: The output will have T number of lines. For each test case T, output will be the key element and its number of copies in the array if the key element is present in the array otherwise print “ Key not present”. */


#include<iostream>

int findKeyAndFreq(int arr[],int,int);
void printStatus(int,int);
using namespace std;
int main(){
	int testCases, n, i, keyElement, keyElementFreq;
	int arr[100];
	//no of test cases
	cin>>testCases;
	while(testCases>=1){
		testCases--;
		//size
		cin>>n;
		//input - sorted
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		//input key element
		cin>>keyElement;
		//algo
		keyElementFreq = findKeyAndFreq(arr, keyElement, n);
		printStatus(keyElementFreq, keyElement);
	}
	return 0;
}

int findKeyAndFreq(int arr[], int keyElement, int sizeArr){
	int midpoint, first = 0,last = sizeArr-1, status, frequency = 0;
	//algorithm
	while(first<=last){
		midpoint = (first+last)/2;
		if(arr[midpoint] == keyElement){
			frequency ++;
			status = midpoint;
			while(arr[midpoint-1] == keyElement){
				frequency++;
				midpoint--;
			}
			midpoint = status;
			while(arr[midpoint+1] == keyElement){
				frequency++;
				midpoint++;
			}
			return frequency;
		}
		else if(arr[midpoint]<keyElement){
			first = midpoint+1;
		}
		else{
			last = midpoint - 1;
		}
	}
	frequency = 0;
	return frequency;
}

void printStatus(int keyElementFreq, int keyElement){
	keyElementFreq == 0? cout<<"Key Not Present"<<endl : cout<<keyElement<<"-"<<keyElementFreq<<endl;
}
