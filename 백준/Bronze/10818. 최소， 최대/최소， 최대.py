import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))
min, max = int(a[0]), int(a[0])

for i in a:
    if min > int(i):
        min = i
    elif max < int(i):
        max = i

print(min, max)