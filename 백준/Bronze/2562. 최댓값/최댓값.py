s = 0
idx = 0
for i in range(1,10):
    a = int(input())
    if s < a:
        s = a
        idx = i

print(s)
print(idx)