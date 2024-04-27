def same_num(a, b, c):
    if a==b:
        same_num = a
    elif b==c:
        same_num = b
    else:
        same_num = c

    return same_num;

def highest_num(a, b, c):
    if a >= b:
        max = a
    else:
        max = b
    if c >= max:
        max = c

    return max

a,b,c = map(int, input().split())

if a+b+c==a*3:
    reward = a * 1000 + 10000
elif a!=b and a!=c and b!=c:
    dice = highest_num(a,b,c)
    reward = dice * 100
else:
    dice = same_num(a,b,c)
    reward = 1000 + dice * 100

print(reward)