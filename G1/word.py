s = input()
c1=0
c2=0
for i in s:
      if(i.islower()):
            c1=c1+1
      elif(i.isupper()):
            c2=c2+1
if c1 > c2:
    print(s.lower())
elif c1 == c2:
    print(s.lower())
elif c1 < c2:
    print(s.upper())
