
a = int(input())
temp2 = []
for i in range(a):
    b,c = input().split()
    b = int(b)
    temp = []
    for j in range(len(c)):
        for k in range(b):
            temp.append(c[j])
    temp2.append("".join(temp))

for i in range(len(temp2)):
    print(temp2[i])