n = int(input())
p_list = [int(s) for s in input().split(' ')]
sum = 0
for i, p in enumerate(sorted(p_list)):
    sum += (n - i) * p
print(sum)