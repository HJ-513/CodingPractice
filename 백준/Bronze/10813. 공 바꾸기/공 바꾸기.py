n,m = map(int, input().split())
basket = list(range(1, n+1))

for _ in range(m):
    i,j = map(int, input().split())
    i-=1
    j-=1
    temp = basket[i]
    basket[i] = basket[j]
    basket[j] = temp

for i in basket:
    print(int(i), end=' ')