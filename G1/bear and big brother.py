a,b= list(map(int,input().split()))
for i in range(100):
    if a<=b:
        a = 3*a
        b = 2*b
        i=i+1
        if a>b:
            print(i)
