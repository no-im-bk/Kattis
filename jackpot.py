import math
n = int(input())
for _ in range(n):
    w = int(input())
    l = [int(x) for x in input().split(" ")]
    ans = 1
    for x in l:
        ans = min(1000000001,math.lcm(ans, x))
    if ans > 1000000000:
        print("More than a billion.", flush=True)
    else:
        print(str(ans), flush=True)