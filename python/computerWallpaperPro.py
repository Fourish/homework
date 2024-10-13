import requests as rq
import re
import bs4 as bs
import base64

url:     str            = "https://nocturne-spider.baicizhan.com/practise/31.html"
headers: dict[str, str] = {"User-Agent": "User-Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36 Edg/129.0.0.0"}
response: rq.Response = rq.get(url, headers=headers)


imgList: list[dict[str, str]] = []
soup = bs.BeautifulSoup(response.text, "html.parser")

imgTag = soup.find_all("img")
for img in imgTag:
    if img.get("alt") is not None:
        imgList.append(dict({"alt": img.get("alt").replace(" ", "_"), "src": img.get("src")}))

countList = {}
for img in imgList:
    if img["alt"] not in countList:
        countList[img["alt"]] = 1
    else:
        countList[img["alt"]] += 1
        img["alt"] += f"_{countList[img['alt']]}"

for img in imgList:
    if img["alt"] not in countList: continue
    if countList[img["alt"]] != 1:
        countList[img["alt"]] = 1
        img["alt"] += f"_{countList[img['alt']]}"


fileNameList: list[dict[str, int]] = []
for img in imgList:
    match = re.match(r"^data:image\/([^;]+);(.+),(.+)$", img["src"])
    if match:
        fileType:     str = match.group(1)
        fileEncoding: str = match.group(2)
        rawData:      str = match.group(3)
        
        decodedData = base64.b64decode(rawData)

        fileName: str

        with open("./{}.{}".format(img["alt"], fileType), "wb") as f:
            f.write(decodedData);
