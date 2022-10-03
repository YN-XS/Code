#TempConvert
TempStr =  input('输入一个带有F或C的温度')
if TempStr[-1] in ['C','c']:
    F = eval(TempStr[0:-1])*1.8+32
    print('{:.2f}'.format(F))
elif TempStr[-1] in ['F','f']:
    C = (eval(TempStr[0:-1])-32)/1.8
    print('{:.2f}'.format(C))
