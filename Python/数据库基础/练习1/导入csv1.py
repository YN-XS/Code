import pymysql

file = open("../csv_data/2007(2).CSV", "rt")
data = file.readline()

alist = tuple(data.replace("\n", "").split(","))
print(alist)

conn = pymysql.connect(user="zijun", password="10041118",
                       charset="utf8", db="read_csv")
cursor = conn.cursor()

for i in alist:
    cursor.execute("alter table score_2 add %s varchar(64)" % i)
    conn.commit()

# 使用insert into 方法插入数据时，字段名不能包括单引号''
alist = str(alist).replace("'", "")

for i in file:
    cursor.execute("insert into score_2 %s values %s" %
                   (alist, tuple(i.split(","))))
    conn.commit()

cursor.execute("select * from score")
result = cursor.fetchall()
print(result)

cursor.close()
conn.close()

file.close()
