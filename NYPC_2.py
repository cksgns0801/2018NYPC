n=int(input())
m=int(input())
count=0
i=0
a=[]
for i in range(n):
    b=input()
    a=b.split(' ')
    for j in range(m):
        if(a[j]=='NEXON'):
            count=count+1
    print(count)

