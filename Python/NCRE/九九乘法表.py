for i in range(1,10):
    for j in range (1,i+1):
        print('{}*{}={}'.format(j,i,i*j),end=' ')#end=空格，将等式分开
    print('\n')        #注意换行符也要加引号，每一行结束后换行
