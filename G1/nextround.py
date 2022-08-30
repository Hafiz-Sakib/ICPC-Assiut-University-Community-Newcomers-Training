def solve():
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    c = 0
    for i in range(0,n):
        if a[k-1]==0 and a[i]==a[k-1]:
            c=c+0
        elif a[k-1]<=a[i]:
            c=c+1
        else:
            c=c+0
    print(c)
solve()
