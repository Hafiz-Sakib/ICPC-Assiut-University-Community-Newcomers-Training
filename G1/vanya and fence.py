n , h=list(map(int,input().split()))
a = list(map(int,input().split()))[:n]
w = 0
w1 = 0
w2 = 0
for i in range(n):
    if a[i]<=h:
        w1 = w1+1
for i in range(n):
    if a[i]>h:
        w2 = w2+2
w = w1+w2
print(w)
