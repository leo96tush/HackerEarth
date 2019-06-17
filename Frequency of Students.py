n = int(input())
a = list()
for _ in range(n):
    a.append(input())

b = sorted(list(set(a)))
for i in b:
    print(i,a.count(i))
