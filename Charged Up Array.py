t = int(input())
for _ in range(t):
    n = int(input())
    p = 2**(n-1)
    summ = 0
    a = list(map(int,input().split()))
    for i in range(len(a)):
        if(a[i]>=p):
            summ = summ+a[i]
    print(summ%(7+10**9))
