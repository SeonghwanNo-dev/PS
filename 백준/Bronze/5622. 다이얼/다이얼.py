def sec_decision(a):
    if ord(a)<=ord('C'):
        return 3
    elif ord(a)<=ord('F'):
        return 4
    elif ord(a)<=ord('I'):
        return 5
    elif ord(a)<=ord('L'):
        return 6
    elif ord(a)<=ord('O'):
        return 7
    elif ord(a)<=ord('S'):
        return 8
    elif ord(a)<=ord('V'):
        return 9
    else:
        return 10
    
    
a = input()
sum = 0
for i in range(len(a)):
    sum += sec_decision(a[i])
    
print(sum)