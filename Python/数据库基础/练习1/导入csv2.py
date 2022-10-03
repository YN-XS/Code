import pymysql

file = open("../csv_data/College.csv", "rt")
data = file.readline()
alist = tuple(data.replace("\n", "").split(","))
print(alist)

conn = pymysql.connect(user="zijun", password="10041118",
                       charset="utf8", db="read_csv")
cursor = conn.cursor()

for i in alist:
    cursor.execute("alter table collage add %s text" % i)
    conn.commit()

# 使用insert into 方法插入数据时，字段名不能包括单引号''
alist = str(alist).replace("'", "")

for i in file:
    print(tuple(i.replace("\n", "").split(",")))
    cursor.execute("insert into collage %s values %s"
                   % (alist, tuple(i.replace("\n", "").split(","))))
    conn.commit()

cursor.execute("select * from collage")
result = cursor.fetchall()
print(result)
print("导入成功")

cursor.close()
conn.close()

file.close()
