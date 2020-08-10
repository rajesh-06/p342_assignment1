sum1=0
n=1
sum2=1
while((sum2-sum1)>0.001):# when sum has difference of 0.001 the loop will stop
	sum1=sum1+(1/n)
	sum2=sum1+(1/(n+1))
	n=n+1
print(sum1)
