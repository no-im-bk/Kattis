import math
import sys
for line in sys.stdin:
    line = [int(x) for x in line.split(" ")]
    l = 1
    for x in line:
        l = math.lcm(x,l)
    print(str(l), flush= True)