H,M = map(int, input().split())

M = (H*60)+M
if M<45:
    M += (60*24)
M -=45
H = M//60
M %= 60
print(H,M)