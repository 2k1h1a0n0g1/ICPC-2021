from itertools import permutations
n = int(input())
ls = []
for i in range(n):
    ls.append(input())
kq = "acdefghijlmnpqrtvwxyz"
perm = permutations("kobus")
#
def win(s,t):
    item = ''.join(t)
    u = "kobus"
    for i in range(min(len(s),len(u))):
        if s[i]==u[i]:
            continue
        ps = item.find(s[i])
        pu = item.find(u[i])
        if ps==-1:
            return 1
        if ps<pu:
            return 0
        if ps>pu:
            return 1
    if len(s)<len(u):
        return 0
    else:
        return 1
        
for item in perm:
    thua = 0
    for s in ls:
        if win(s,item):
            continue
        else:
            thua = 1
    if thua==0:
        kq = ''.join(item)+kq
        break
    else:
        continue
if len(kq)<26:
    print("sem chance")
else:
    print(kq)
