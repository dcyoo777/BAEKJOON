n = int(input())
number_set = [False for i in range(20)]
result = []

for i in range(n):
    line = input()

    if line == "all":
        number_set = [True for j in range(20)]
        continue

    if line == "empty":
        number_set = [False for j in range(20)]
        continue

    command = line.split(' ')[0]
    x = int(line.split(' ')[1])

    if command == "add":
        number_set[x - 1] = True
        continue
    
    if command == "remove":
        number_set[x - 1] = False
        continue
    
    if command == "toggle":
        number_set[x - 1] = not number_set[x - 1]
        continue

    if command == "check":
        if number_set[x - 1]:
            result.push("1")
        else: 
            result.push("0")

print("\n".join(result) + "\n")