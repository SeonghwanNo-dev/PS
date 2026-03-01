from collections import defaultdict

a = input()
b = defaultdict(lambda: -1)

for i in range(len(a)):
    temp = ord(a[i])
    if b[temp] == -1:
        b[temp] = i
 

for i in range(ord('a'), ord('z')+1):
    if b[i] == -1:
        print(-1, end=" ")
    else:
       print(b[i], end=" ")