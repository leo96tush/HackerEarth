n = int(input())
a = list(map(int,input().split()))
m = int(input())
c = list(map(int,input().split()))

a = sorted(a)
c = sorted(c)

b_initial = list()
for i in c:
    for j in a:
        if(i>j):
            b_initial.append(i-j)
b_initial = list(set(b_initial))
b_final = list()
for i in a:
    for j in b_initial[::-1]:
        k = i+j
        if k not in c:
            b_initial.remove(j)
print(*b_initial,sep=' ')
