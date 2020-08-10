print('Factorial of a number')
f =1
i=input('Enter a number(n) to get its factorial ' )
try:
	x=int(i)
	if x >=0:
		for y in range(1,x+1):
			f=f*y
		print(f)
	else:
		print('This is a negative integer')
except ValueError:
	print("The input value is not an integer")