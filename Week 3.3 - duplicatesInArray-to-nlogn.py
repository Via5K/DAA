def duplicates(inputArr,sizeArr):
	for i in range(0,len(inputArr)):
		first = i+1
		last = len(inputArr)-1
		keyElement = inputArr[i]
		while first <= last:
			midpoint = (first+last)//2 	 	 	
			if int(inputArr[midpoint]) == int(keyElement):
				return 1
			elif int(inputArr[midpoint])<int(keyElement):
				first = midpoint+1
			else:
				last = midpoint-1
			
#Print Code
def printStatus (status):
	if status == 1: 
		print('YES')
	else:
		print('NO')


#driver Code
inputArr = []
testCases = int(input())
while testCases!=0:
	testCases-=1
	sizeArr = int(input())
	inputArr = input()
	inputArr = inputArr.split(' ')
	inputArr.sort()
	status = duplicates(inputArr,sizeArr)
	printStatus(status)