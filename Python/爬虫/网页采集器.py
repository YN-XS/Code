import requests

url = "https://cn.bing.com/"
keyword = input("输入需要查询的内容")
# 头信息字典
headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/101.0.4951.64 Safari/537.36 Edg/101.0.1210.53"
}
# 参数字典
# 检索参数query的标识符，根据使用浏览器而定
param = {
    "q": keyword
}
response = requests.get(url=url, params=param, headers=headers)
page_text = response.text
page_name = keyword + ".html"
print(page_text)
with open(page_name, "w", encoding="utf-8") as file:
    file.write(page_text)
    print("爬起完成")
