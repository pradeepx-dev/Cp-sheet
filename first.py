def max_coins(arr, n):
    pos_prefix = [0] * (n + 1)
    neg_prefix = [0] * (n + 1)

    # Compute positive and negative prefix sums
    for i in range(n):
        pos_prefix[i + 1] = pos_prefix[i] + (arr[i] if arr[i] > 0 else 0)
        neg_prefix[i + 1] = neg_prefix[i] + (abs(arr[i]) if arr[i] < 0 else 0)

    max_coins = max(arr)  # Consider the max single element in case of only negatives

    # Try taking positive prefix and adding a shifted negative prefix
    for i in range(n + 1):  
        if i < n:  # Ensuring we have a valid shift
            max_coins = max(max_coins, pos_prefix[i] + neg_prefix[n] - neg_prefix[i + 1])

    print(max_coins)

# Input handling
t = int(input())  
for _ in range(t):
    n = int(input())  
    arr = list(map(int, input().split()))  
    max_coins(arr, n)
