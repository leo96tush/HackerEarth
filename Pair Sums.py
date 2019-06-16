def result(a,k):
    n = len(a)    
    i = 0 
    j = n-1
    a = sorted(a)
    while(i!=j):
        if(a[i]+a[j]<k):
            i = i+1
        elif(a[i]+a[j]>k):
            j = j-1
        elif(a[i]+a[j]==k):
            return("YES")
    return("NO")

n,k = map(int,input().split())
a = list(map(int,input().split()))
print(result(a,k))
