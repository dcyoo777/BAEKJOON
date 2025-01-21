n, k = [int(s) for s in input().split(' ')]
coins = [int(input()) for _ in range(n)]
coins.sort(reverse=True)
count = 0
for coin in coins:
    count += k // coin
    k %= coin
print(count)