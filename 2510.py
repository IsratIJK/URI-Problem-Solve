T=int(input())
for i in range(T):
    a=input()
    length=len(a)#to get the length of a we can use len(string variable) 
    if length >=0 and length <=25:
        print('Y')
    else:
        print('N')