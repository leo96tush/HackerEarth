n = int(input())
a = list(map(int,input().split()))
k = list()
summ = 0
count = 0
if(max(a)<0):
    print(max(a),1)
else: 
    for i in range(len(a)):
        if(a[i]>=0):
            summ = summ+a[i]
            count+=1
