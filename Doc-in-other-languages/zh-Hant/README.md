<div class="center" align="center">
  <a href="#">
    <img alt="Py-Crawler-ICON" src="https://helloosdisk.wikidot.com/local--files/file:github/Pyc" width="100px">
  </a><br/>
  <img alt="Py-Crawler-ICON" src="https://helloosdisk.wikidot.com/local--files/file:github/pyctext.png" width="300px">
  <p>備份你的維琪點</p>
  <img alt="" src="https://img.shields.io/github/license/HelloOSMe/Py-crawler">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/v/release/HelloOSMe/Py-Crawler?include_prereleases">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/stars/HelloOSMe/Py-crawler">
</div>

---------
## WIKI HTML代碼存檔（Py-crawler）

這是用來創建一個爬蟲工程，用於爬取wiki上存在的所有頁面，用於在受災后的網站靜態只讀版本。 可能不適用於恢復工程，但是為恢復頁面提供了依據。
目前來說，這適用於所有Wikidot網站，但是為了防止惡意爬蟲，任何網站必須有pages頁面才可以爬取。

### **配置要求**
```
在你的網站URL/pages上建立一個頁面，添加 [[module Pages preview="true"]] 代碼
```

### **爬蟲程式安裝**
請點擊側欄`Releases`中顯示的最新版，選擇“Source Code”下載。

### **爬蟲運行**
* 運行時用bash在項目根目錄下執行`./ main`。
* 在URL處輸入你的網址，然後換行執行。
* 去查看你的網站URL/system:list-all-pages頁面下麵顯示的page X of X的後面一個數（在本例子中就是後面一個x）
* pages處輸入這個數【如果你填多了（設這個數為X，X≠0），它會輸出1～X的HTML檔案（名稱為pages1~pagesX.html）但是（X-1）和X是同一個】，然後換行。
* 靜靜等待程式執行完畢吧，會有彈窗提示的。
* 完成了？ 記得把html資料夾移動一下，避免混淆。

### **反饋位址**
遇到了錯誤或BUG？ 來 [這裡](https://github.com/HelloOSMe/Py-crawler/issues) 反饋。

有新功能的想法，但是不知道在那裡反饋？ 來 [這裡](https://github.com/HelloOSMe/Py-crawler/issues) 反饋。

你可以給我們提供技術説明？ 來 [這裡](https://github.com/HelloOSMe/Py-crawler/fork) 拉取分支進行修改吧。

```
Copyright (c) 2022-2023 HelloOSMe
All Rights Reserved.

版權所有（c）2022-2023 HelloOSMe
保留所有權利。

The application for Linux made by RedPanda Dev-Cpp , Replit and Windows Notepad.
```
