import requests
url = "http://www.baidu.com"
response = requests.get(url=url)
page_text = response.text
print(page_text)
with open("baidu.html", "w", encoding="UTF-8") as file:
    file.write(page_text)
    print("爬取完成")

