# Origianally posted here: https://github.com/Osalotioman/47th_ICPC_World_FInals_2023
def det(v):
	f1 = v[0][0] * (v[1][1]*v[2][2] - v[1][2]*v[2][1]) 
	f2 = v[0][1] * (v[1][0]*v[2][2] - v[1][2]*v[2][0])
	f3 = v[0][2] * (v[1][0]*v[2][1] - v[1][1]*v[2][0])
	return f1-f2+f3
def tr(v, c1, c2, c3):
	f = []
	for i in range(3):
		f.append([v[i][c1], v[i][c2], v[i][c3]])
	return f
def ni(v):
	if isinstance(v, (int, float)) and v == int(v) and v>-1:
		return True
	return False
def solve(ei):
	for i in range(4):
		ei[2][i] += ei[3][i] 
	ei = [ei[0], ei[1], ei[2]]
	y = det(tr(ei, 0, 1, 2))
	a = det(tr(ei, 3, 1, 2))
	b = det(tr(ei, 0, 3, 2))
	c = det(tr(ei, 0, 1, 3))
	try:
		a = a/y
		b = b/y
		c = c/y
		if ni(a) and ni(b) and ni(c):
			return [True, int(a), int(b), int(c)]
	except:
		return [False]
	return [False]
qn = [[9, 0, 9],
		[0, 9, 0],
		[0, 0, 9],
		[1, 1, 1],
		[0, 0, 1]]
for i in range(5):
	print(qn[i][0], " ", qn[i][1], " ", qn[i][2])
	qn[i].append(int(input()))
#print(qn)
#Now we have gotten q1 .. q5, next step:
e = []
for i in range(5):
	e.append([qn[i], qn[(i+1)%5], qn[(i+2) % 5], qn[(i+3)%5]])
for i in range(5):
	r = solve(e[i])
	if r[0]:
		print(r[1], " ", r[2], " ", r[3])
		break
#print(E)