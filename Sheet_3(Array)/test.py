I=lambda:map(int,input().split())
N,Q=I();a=set(I())
for _ in range(Q):q,=I();print(["not ",""][q in a]+"found")