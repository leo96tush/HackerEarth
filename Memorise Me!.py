count = [0]*10000
n = int(input())
numbers = list(map(int,input().split()))
for i in range(len(numbers)):
    count[numbers[i]]=count[numbers[i]]+1

t = int(input())
for _ in range(t):
    check = int(input())
    if(count[check]==0):
        print('NOT PRESENT')
    else:
        print(count[check])
