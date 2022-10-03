def isprime(num):
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    else:
        return True


def istext(num):
    num_str = str(num)
    if num_str == num_str[::-1]:
        return True
    else:
        return False


def func(n):
    count = 0
    num = 2
    while num > 0 and count < n:
        if isprime(num) and istext(num):
            print(num, end=" ")
            count += 1
        num += 1


x = eval(input())
func(x)
