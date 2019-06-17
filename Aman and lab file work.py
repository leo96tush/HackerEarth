n=int(input())
d=dict()
for i in range(n):
    a,b=[int(z) for z in input().split()]
    if a+b in d.keys():
        temp=[]
        temp.append(i+1)
        d[a+b].extend(temp)
    else:
        temp=[]
        temp.append(i+1)
        d[a+b]=temp
 
for i in range(len(d.keys())):
    a=min(d.keys())
    for j in d[a]:
        print(j,end=' ')
    d.pop(a)
