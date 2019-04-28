import math

def isprime(n):
    k = int(math.sqrt(n))
    for i in range(2,k+1):
        if(n%i==0):
            return(False)
            break
    else:
        return(True)

number = int(input())
prime_list = list()
for i in range(2,number):
    if(isprime(i)==True):
        prime_list.append(i)

print(*prime_list,sep=' ')
