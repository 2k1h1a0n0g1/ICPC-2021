from itertools import combinations
q,n = map(int,input().split())
lq = list(map(int,input().split()))
ln = list(map(int,input().split()))

def test(a):
    a = map(str,a)
    a = ''.join(a)
    for i in a:
        j = int(i)
        if a.count(i) > ln.count(j):
            return 0
    return 1

for i in range(len(lq),-1,-1):
    comb = combinations(lq,i)
    for item in comb:
        kq = test(list(item))
        if kq:
            print(len(item))
            print(*item)
            exit(0)
        
        
    
    
