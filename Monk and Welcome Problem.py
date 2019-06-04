n = int(input())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
c = list()
for i in range(len(a)):
    c.append(a[i]+b[i])
print(*c,sep=" ")
