<div class="center" align="center">
  <a href="#">
    <img alt="Py-Crawler-ICON" src="https://helloosdisk.wikidot.com/local--files/file:github/Pyc" width="100px">
  </a><br/>
  <img alt="Py-Crawler-ICON" src="https://helloosdisk.wikidot.com/local--files/file:github/pyctext.png" width="300px">
  <p>备份你的维基点</p>
  <img alt="" src="https://img.shields.io/github/license/HelloOSMe/Py-crawler">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/v/release/HelloOSMe/Py-Crawler?include_prereleases">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/stars/HelloOSMe/Py-crawler">
</div>

----------
# 本项目停止支持，详见[这里](https://github.com/HelloOSMe/Py-crawler/releases/tag/stop-support)。
# Stop support.

## 其他语言/Language
[English](https://github.com/HelloOSMe/Py-crawler/tree/master/Doc-in-other-languages/en) | [Русский язык](https://github.com/HelloOSMe/Py-crawler/tree/master/Doc-in-other-languages/ru) | [繁體中文](https://github.com/HelloOSMe/Py-crawler/tree/master/Doc-in-other-languages/zh-Hant) | [More...](https://github.com/HelloOSMe/Py-crawler/tree/master/Doc-in-other-languages)

## 维基HTML代码存档（Py-crawler）

这是用来创建一个爬虫工程，用于爬取wiki上存在的所有页面，用于在受灾后的网站静态只读版本。可能不适用于恢复工程，但是为恢复页面提供了依据。
目前来说，这适用于所有Wikidot网站，但是为了防止恶意爬虫，任何网站必须有/system:list-all-pages页面才可以爬。

### **配置要求**

```
在你的网站URL/system:list-all-pages上建立一个页面，添加 [[module Pages preview="true"]] 代码
```

### **爬虫程序安装**
请点击侧栏`Releases`中显示的最新版，选择"Source Code"下载。

### **爬虫运行**
* 运行时用bash在项目根目录下执行`./main`。
* 在URL处输入你的网址，点击确认。
* 去查看你的网站URL/system:list-all-pages页面下面显示的page X of X的后面一个数（在本例子中就是后面一个x)
* pages处输入这个数【如果你填多了（设这个数为X，X≠0），它会输出1～X的HTML文件（名称为pages1~pagesX.html）但是(X-1)和X是同一个】，然后换行。
* 静静等待程序执行完毕吧。
* 完成了？记得把html文件夹移动一下，避免混淆。

### **反馈地址**

遇到了错误或BUG？ 来 [这里](https://github.com/HelloOSMe/Py-crawler/issues) 反馈。

有新功能的想法，但是不知道在那里反馈？ 来 [这里](https://github.com/HelloOSMe/Py-crawler/issues)反馈。

你可以给我们提供技术帮助？ 来 [这里](https://github.com/HelloOSMe/Py-crawler/fork) 拉取分支进行修改吧。

----------

```
Copyright (c) 2022-2023 HelloOSMe
All Rights Reserved.

版权所有 (c) 2022-2023 HelloOSMe
保留所有权利。

The application for Linux made by RedPanda Dev-Cpp , Replit and Windows Notepad.
```
