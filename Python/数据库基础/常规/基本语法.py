import pymysql

# 连接到MySQL
conn = pymysql.connect(host='127.0.0.1', port=3306,
                       user='zijun', password='10041118', charset='utf8')
cursor = conn.cursor()

# 查看数据库
cursor.execute("show databases")
# 获取指令的结果
result = cursor.fetchall()
print(result)

# 创建数据库
# cursor.execute("create database read_csv DEFAULT CHARSET utf8 COLLATE utf8_general_ci")
# conn.commit()

# 删除数据库
# cursor.execute("drop database day2")
# conn.commit()

# 进入数据库
cursor.execute("use read_csv")

# # 创建数据表
# cursor.execute("create table equipment(id int not null auto_increment primary key)")
# conn.commit()

# 查看数据表
cursor.execute("show tables")
# 获取指令的结果
result = cursor.fetchall()
print(result)

# 关闭连接
cursor.close()
conn.close()
