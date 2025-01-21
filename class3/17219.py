n, m = [int(s) for s in input().split(' ')]
dict = {}
for i in range(n):
    line = input().split(' ')
    dict[line[0]] = line[1]
for i in range(m):
    print(dict[input()])