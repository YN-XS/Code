import datetime
import pymysql

conn = pymysql.connect(user="zijun", password="10041118",
                       charset="utf8", db="user_management_system")
cursor = conn.cursor()

insert_info = ("insert into work2(name, password, gender, ctime)"
               "values('JZJ','123','男','{}'),('YS','456','女','{}'),"
               "('JSY','123','男','{}'),('JYS','456','女','{}')").format(datetime.datetime.now(),
                                                                       datetime.datetime.now(),
                                                                       datetime.datetime.now(),
                                                                       datetime.datetime.now())

cursor.execute(insert_info)
conn.commit()

cursor.execute("update work2 set gender='男' where id > 2")
conn.commit()

cursor.execute("select * from work2 where amount=0")
data1 = cursor.fetchall()

cursor.execute("update work2 set amount=amount+1000")
conn.commit()

cursor.execute("select * from work2")
data2 = cursor.fetchall()

cursor.execute("delete from work2 where id=4")
conn.commit()

cursor.execute("select * from work2")
data3 = cursor.fetchall()

cursor.close()
conn.close()
