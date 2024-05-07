N, M = input().split()

basket = {}
for n in range(int(N)):
    basket[n] = '0'

for m in range(int(M)):
    I, J, K = input().split()
    for i in range(int(I)-1, int(J)):
        basket[i] = K

result = ''
for n in range(int(N)):
    result += basket[n] + ' '

print(result)