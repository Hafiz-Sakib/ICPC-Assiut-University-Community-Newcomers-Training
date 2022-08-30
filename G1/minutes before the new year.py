t = int (input())
l = []
for i in range(t):
    h,m = list(map(int,input().split()))
    a = 1440
    b = h*60+m
    c = a-b
    l.append(c)
for i in range(len(l)):
    print(l[i])
    
