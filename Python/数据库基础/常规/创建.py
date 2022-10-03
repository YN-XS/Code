import pymysql

conn = pymysql.connect(user="zijun", password="10041118", charset="utf8")
cursor = conn.cursor()

# cursor.execute("show databases")
# data = cursor.fetchall()
# print(data)
# cursor.execute(
#     "create database application DEFAULT CHARSET utf8 COLLATE utf8_general_ci;")
# conn.commit()
# print("创建数据库成功")

cursor.execute("use application")
datasheet_info = """
create table user_management_system(
    id int not null primary key auto_increment,
    user_name varchar(10) not null,
    password varchar(20) not null
)default charset=utf8;
"""
cursor.execute(datasheet_info)
print("创建数据表成功")

cursor.execute("use application")
cursor.execute("desc user_management_system")
data1 = cursor.fetchall()
print(data1)
cursor.execute("select * from user_management_system")
data2 = cursor.fetchall()
print(data2)

cursor.close()
conn.close()
