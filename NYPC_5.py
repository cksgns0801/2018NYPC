word=[]
n=int(input())
for i in range(n):
    b=input()
    a=b.split(' ')
    c=len(a)
    for j in range(c):
        sc=str(a[j])
        word.append(sc[:1])

    word.append(':')
    s="".join(word)

ppap=s.split(':')
print("------------------------------------------------------")
for i in range(len(ppap)):
    print(ppap[i])
