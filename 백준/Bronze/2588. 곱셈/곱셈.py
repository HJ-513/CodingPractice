a = int(input())
b = int(input())

line3 = b%10*a
line4 = int(int(b%100)/10)*a
line5 = int(b/100)*a
line6 = a*b

print(line3)
print(line4)
print(line5)
print(line6)