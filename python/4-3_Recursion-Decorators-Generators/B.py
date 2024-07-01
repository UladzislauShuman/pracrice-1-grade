def recursive_digit_sum(num):
    return num % 10 + recursive_digit_sum(num // 10) if num else 0
    
