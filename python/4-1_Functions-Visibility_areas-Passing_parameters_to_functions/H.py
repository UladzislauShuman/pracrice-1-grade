def is_palindrome(n):
    if isinstance(n, int):
        return str(n) == str(n)[::-1]
    else:
        return n == n[::-1] 