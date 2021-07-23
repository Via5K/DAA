#DAA-JumpSearch
from math import sqrt,floor

def jumpSearch(inputArr,keyElement,jumpSize):
	jumps = 0
	first = 0
	last = jumpSize
	while 1:
		jumps+=1
		if last>=sizeArr:
			first = last - jumpSize
			last = sizeArr
			return(linearSearch(inputArr,keyElement,jumps,first,last))
		elif keyElement<int(inputArr[last]):
			return(linearSearch(inputArr,keyElement,jumps,first,last))
		else:
			first = last
			last = last+jumpSize			

def linearSearch(inputArr,keyElement,prevCount,firstIndex,lastIndex):
	for i in range(firstIndex,lastIndex+1):
		prevCount += 1
		if int(inputArr[i]) == keyElement:
			return 	1,prevCount
	return 0,prevCount


def printStatus (status,count):
	if status == 1: 
		print('Present {}'.format(count))
	else:
		print('Not Present {}'.format(count))


def blockSize(sizeArr):
	jumpSize = floor(sqrt(sizeArr))
	return jumpSize

inputArr = []
"""
Input 1: 
size = 9
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
	sizeArr = int(input())
	inputArr = input()
	inputArr = inputArr.split(' ')
	inputArr.sort() #in case if the user enters un-sorted array
	keyElement = int(input())
	jumpSize = blockSize(sizeArr)
	print(inputArr)
	status,jumps = jumpSearch(inputArr,keyElement,jumpSize)
	printStatus(status,jumps)