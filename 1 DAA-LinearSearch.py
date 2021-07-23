#DAA - Linear Search

def linearSearch(inputArr,keyElement):
	count = 0
	for i in range(0,len(inputArr)):
		count += 1
		if int(inputArr[i]) == keyElement:
			return 	1,count
	return 0,count



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
	sizeArr = int(input())
	inputArr = input()
	inputArr = inputArr.split(' ')
	keyElement = int(input())
	status,jumps = linearSearch(inputArr,keyElement)
	printStatus(status,jumps)