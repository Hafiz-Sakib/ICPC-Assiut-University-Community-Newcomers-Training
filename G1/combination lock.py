def solve():    
    n = int(input())
    s = input()
    s = list(s)
    c = input()
    c = list(c)
    k = 0
    for i in range(n):
        d = int(s[i])-int(c[i])
        if d<0:
            d = -d
        else:
            d = d
        if d>5:
            x = 9-d
            x=x+1
            k=k+x
        else:
            k = k+d
    print(k)
solve()
