n = int(input())

ivls = [ tuple(map(int,input().split())) for _ in range(n)]

ivls.sort()
cover = 1
curr = 0

tst = ivls[0][1]

for a,b in ivls:
	if a>tst:
		cover+=1
		tst=b
	elif b<=tst:
		tst = b

print(cover)