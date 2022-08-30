s = input()
s = list(s)
s = list(dict.fromkeys(s))
n = len(s)
if n%2==0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
