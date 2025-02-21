import sys
import math

for line in sys.stdin:
    line = line.split(" ")
    n = int(line[0])
    k = int(line[1])

    fact = math.factorial(n)

    l = [x for x in range(n)]

    for i in range(n):
        fact = fact // n
        n  = n - 1
        print(str(l[k // fact] + 1) + " ", end = '')
        l.pop(k // fact)
        k = k % fact

    print(flush=True)
    