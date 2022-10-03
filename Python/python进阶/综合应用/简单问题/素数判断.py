def isprime(num):
    for i in range(2, int(num**0.5)+1):  # 一个数n，判断2——n**0.5取整+1
        if num % i == 0:
            return False
    else:
        return True


"""
素数=质数：一个大于1的自然数，除了1和它本身，没有其他约数
素数等于质数：没有可除尽
合数：只要有一个可以除尽
"""
