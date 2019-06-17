from collections import defaultdict
n = int(input())
hashmap = defaultdict(lambda:0)
for i in range(n):
    x,y = map(int,input().split())
    hashmap[(x,y)]+=1

for key in sorted(hashmap.keys()):
    if(hashmap[key]):
        print(str(key[0])+' '+str(key[1])+' '+str(hashmap[key]))
