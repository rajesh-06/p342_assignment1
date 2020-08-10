sum=0
print('Enter a number to sum 0 to that number')
y = input('Enter a number ')
try:
	n=int(y)
	if n>=0:
		for x in range(0,n+1,1):
			sum = sum + x
		print('Summation of 0 to', n, 'is ', sum)
	else:
		print('The input value is not a whole number')
except ValueError:
	print('The input value is not a whole number')