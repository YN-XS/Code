def sum_num(num1, num2):
    """
    两数求和
    :param num1: 数字1
    :param num2: 数字2
    """
    return num1 + num2


a = eval(input("请输入a的值"))
b = eval(input("请输入b的值"))
print(sum_num(a, b))


def line(symbol, frequency):
    """
    下划线
    :param symbol: 下划线符号
    :param frequency: 下划线符号个数
    """
    return symbol * frequency


print(line("*", 100))


def lines(symbol_frequency, symbol, line_frequency):
    """
    多行下划线
    :param symbol_frequency: 符号次数
    :param symbol: 符号
    :param line_frequency: 下划线条数
    """
    i = 0
    while i < line_frequency:
        print(line(symbol, symbol_frequency))
        i = i + 1


lines(100, "$", 4)

