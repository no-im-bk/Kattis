import math

line = input().split(" ")
a = int(line[0])
b = int(line[1])

g = math.gcd(a,b)

if (a // g) % 2 == 1 and (b // g) % 2 == 1:
    print(str(g), flush = True)
else:
    print("0", flush=True)

