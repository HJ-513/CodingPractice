assignments = []
for i in range(30):
    assignments.append(0)

for i in range(28):
    idx = int(input())
    assignments[idx-1]=1

for i in range(30):
    if assignments[i]==0:
        print(i+1, end=' ')