#DAA-BinarySearch

def binarySearch(inputArr,keyElement,sizeArr):
	count,first = 0,0
	last = len(inputArr)-1
	while first <= last:
		count+=1
		midpoint = (first+last)//2 	 	 	
		if int(inputArr[midpoint]) == keyElement:
			return 1,count
		elif int(inputArr[midpoint])<keyElement:
			first = midpoint+1
		else:
			last = midpoint-1



def printStatus (status,count):
	if status == 1: 
		print('Present {}'.format(count))
	else:
		print('Not Present {}'.format(count))



inputArr = []
"""
Input 1: 
size = 8
arr = 34 35 65 31 25 89 64 30 89
key = 65

Input 2:
size = 5 
arr = 977 354 244 546 355
key = 244

Input 3:
size = 6
arr = 23 64 13 67 43 56
key = 63

"""
testCases = int(input())
while testCases!=0:
	testCases-=1
	numberOfSearches = 0
	sizeArr = int(input())
	inputArr = input()
	inputArr = inputArr.split(' ')
	inputArr.sort() #in case if the user enters un-sorted array
	keyElement = int(input())
	print(inputArr)
	status,jumps = binarySearch(inputArr,keyElement,sizeArr)
	printStatus(status,jumps)