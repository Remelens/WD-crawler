## 维基HTML代码存档（Py-crawler）

这是用来创建一个爬虫工程，用于爬取wiki上存在的所有页面，用于在受灾后的网站静态只读版本。可能不适用于恢复工程，但是为恢复页面提供了依据。
目前来说，这适用于所有Wikidot网站，但是为了防止恶意爬虫，任何网站必须有/system:list-all-pages页面才可以爬。

### **配置要求**

```
在你的网站URL/pages上建立一个页面，添加 [[module Pages preview="true"]] 代码
```

### **爬虫程序安装**
请点击侧栏`Releases`中显示的最新版，选择Installer.exe结尾的安装文件。它将会把文件安装到同一目录。你只需要在键盘上点击对应按钮即可触发相应命令。

我们以后不再支持Linux。

### **爬虫运行**
* 运行时启用main.exe()。
* 在命令行输入区输入你的网址，点击确认。
* 去查看你的网站URL/system:list-all-pages页面下面显示的page X of X的后面一个数（在本例子中就是后面一个x)
* 命令行输入区输入这个数【如果你填多了（设这个数为X，X≠0），它会输出1～X的HTML文件（名称为pages1~pagesX.html）但是(X-1)和X是同一个】，然后换行。
* 静静等待程序执行完毕吧。（若发现了一个页面有多次爬取，那是正常的，程序会爬上面存在的所有链接）
* 完成了？记得把html文件夹移动一下，避免混淆。

### **反馈地址**

https://github.com/HelloOSMe/Py-crawler/issues

----------

```
Copyright (c) 2022 HelloOSMe
All Rights Reserved.

版权所有 (c) 2022 HelloOSMe
保留所有权利。
```
