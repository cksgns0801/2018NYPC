a=int(input())
i=0
apple=600000
string=[]
score=[10,8,6,5,4,3,2,1,0]

win=[]

for i in range(a):
    mode=input(str())
    if mode=='item':
        apple=600000
        for j in range(8):
            sum = 0
            team, time_set = map(str, input().split())
            min=int(time_set.split(':')[0])
            sc, ms = map(int, time_set.split(':')[1].split('.')) 
            sum=sum+min*60000
            sum=sum+sc*1000
            sum=sum+ms*10
            if team=='red':
                sum=sum+1
            else:
                sum=sum+2
            if(apple>sum):
                apple=sum
            #print(apple)
            # string.append(sum)

        if apple%10==1:
            win.append('red')    
        else:
            win.append('blue')  

    elif mode=='speed':
        redscore=0
        bluescore=0
        apple=600000
        for j in range(8):
            sum = 0
            team, time_set = map(str, input().split())
            min=int(time_set.split(':')[0])
            sc, ms = map(int, time_set.split(':')[1].split('.')) 
            sum=sum+min*60000
            sum=sum+sc*1000
            sum=sum+ms*10
            if team=='red':
                sum=sum+1
            else:
                sum=sum+2
            if(apple>sum):
                apple=sum
            #print(apple)
            string.append(sum)
        string.sort()
        #print(string)
        for j in range(8):
            if string[0]+10000>string[j]:
                if string[j]%10==1:
                    redscore=redscore+score[j]
                    
                else:
                    bluescore=bluescore+score[j]
                #print(redscore)
                #print(bluescore)   
        if  redscore==bluescore:
            if string[0]%10==1:
                win.append('red') 
            else:
                win.append('blue') 
        elif redscore>bluescore:
            win.append('red')    
        else:
            win.append('blue')  

        string=[]

        #print(redscore,bluescore)

for i in win:
    print(i)