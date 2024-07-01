def is_prime(num):
    k = int(num ** 0.5)
    ans = True
    for i in range(2, k + 1):
        if num % i == 0:
            ans = False
            break
    return ans