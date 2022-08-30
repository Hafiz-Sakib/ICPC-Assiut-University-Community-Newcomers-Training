def answer()
    n = int(input())
    s = str(input())
    s1 = list(s)
    d = 0
    a = 0
    for i in range(len(s1)):
        if s1[i]=='D':
            d=d+1
    for j in range(len(s1)):
        if s1[j]=='A':
            a=a+1
    if a>d:
        print("Anton")
    elif a==d:
        print("Friendship")
    else:
        print("Danik")
answer()
