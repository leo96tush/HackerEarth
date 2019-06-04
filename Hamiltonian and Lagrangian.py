n = int(input())
arr = list(map(int,input().split()))
maxx = arr[n-1]
p = list()
for i in range(n-1,-1,-1):
    if(arr[i]>=maxx):
        p.append(arr[i])
        maxx = arr[i]
print(*p[::-1],sep=" ")
