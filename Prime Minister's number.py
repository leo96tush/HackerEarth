import math
def isprime(n):
    for i in range(2,int(math.sqrt(n))+1):
        if((n%i)==0):
            return(0)
    else:
        return(1)

arr = list(map(int,input().split()))
a = arr[0]
b = arr[1]
myarr = list()
for i in range(a,b+1):
    if(isprime(i)==1):
        m = list(str(i))
        summ = 0
        for k in range(len(m)):
            summ = summ + int(m[k])
        if(isprime(summ)==1):
            myarr.append(i)
print(*myarr,sep=" ")
