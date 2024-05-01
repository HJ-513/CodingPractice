import sys

n = int(sys.stdin.readline())

l = map(int, sys.stdin.readline().split())

num = int(sys.stdin.readline())
cnt = 0

for i in l:
    if i == num:
        cnt+=1

print(cnt)