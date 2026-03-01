a = input()
sum = 0
for i in range(len(a)):
    if a[i]==" ":
        sum+=1
        
if a[0] == " ":
    sum-=1
if a[len(a)-1] == " ":
    sum-=1
    
print(sum+1)