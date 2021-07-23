/*
Fizz-Buzz problem
Input numbers from 1-100 and print them on separate lines.

For multiples of 3, print “Fizz” in place of that number.

For multiples of 5, print “Buzz” in place of that number.

For multiples of 15, print “FizzBuzz” in place of that number.

*/
#include<iostream>
using namespace std;
int main(){
	
	int i;
	
	//FizzBuzz Problem
	for(i=1;i<=100;i++){  
		if(i%15==0){
			cout<<"Fizz-Buzz"<<endl; 
		}
		else if(i%5==0){
			cout<<"Buzz"<<endl; 
		}
		else if(i%3==0){
			cout<<"Fizz"<<endl; 
		}
		else{
			cout<<i<<endl; 
		}
	}
return 0;	 //O(1)
}
