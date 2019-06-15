

t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    final = [0]*n
    s = []
    final[0] = 1
    s.append(0)
    for i in range(1,len(arr)):
        while s and arr[s[-1]]<= arr[i]:
            s.pop()
        if s:
            final[i] = i - (s[-1])
        else:
            final[i] = i + 1
        s.append(i)
    print(*final)
