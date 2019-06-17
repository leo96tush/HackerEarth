from collections import defaultdict
t = int(input())
for _ in range(t):
    s = list(input().split())
    n = int(s[0])
    q = int(s[1])
    a = list(map(int,input().split()))
    hashmap = defaultdict(lambda:0)
    for i in range(len(a)):
        x = a[i]
        hashmap[(x)] = hashmap[(x)]+1
    for _ in range(q):
        p = int(input())
        if p in hashmap:
            print(hashmap[p])
        else:
            print('0')
        
