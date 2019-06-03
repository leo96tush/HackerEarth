t = int(input())
for _ in range(t):
    string = input()
    number = 0
    for i in range(len(string)):
        if(string[i] in 'aeiouAEIOU'):
            number = number + (i+1)*(len(string)-i)
    print(number)
