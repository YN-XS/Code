#BMI指数
height, weight = eval(input('请输入身高(米)体重(千克)并且用逗号隔开:'))
print(height, weight)
bmi = weight / pow(height,2)
print(bmi)
if bmi < 18.5:
    print('国内{}，国际{}'.format('偏瘦','偏瘦'))
elif 18.5 < bmi < 24:
    print('国内{}，国际{}'.format('正常','正常'))
elif 24 < bmi < 25:
    print('国内{}，国际{}'.format('偏胖','正常'))
elif 25 < bmi < 28:
    print('国内{}，国际{}'.format('偏胖','偏胖'))
elif 28 < bmi < 30:
    print('国内{}，国际{}'.format('肥胖','偏胖'))
else:
    print('国内{}，国际{}'.format('肥胖','肥胖'))