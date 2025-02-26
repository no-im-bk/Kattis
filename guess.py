
xmax = 1000
xmin = 1

while True:
    g = (xmax + xmin)//2
    print(g, flush= True)
    s = input()

    if s == "higher":
        xmin = g+1
    elif s == "lower":
        xmax = g-1
    else:
        break