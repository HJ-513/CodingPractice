sum = int(input())
N = int(input())

for i in range(N):
    price, cnt = map(int, input().split())
    sum -= (price*cnt)

if sum == 0:
    print("Yes")
else:
    print("No")