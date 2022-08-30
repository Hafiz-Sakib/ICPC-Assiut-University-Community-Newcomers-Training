l = list(map(int,input().split()))
if l[0]+l[1]==l[2]+l[3] or l[0]+l[2]==l[1]+l[3] or l[0]+l[3]==l[1]+l[2] or l[0]+l[1]+l[2]==l[3] or l[0]+l[2]+l[3]==l[1] or l[0]+l[1]+l[3]==l[2] or l[1]+l[3]+l[2]==l[0] :
    print("YES")
else:
    print("NO")
