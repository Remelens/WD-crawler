<div class="center" align="center">
  <a href="#">
    <img alt="Py-Crawler-ICON" src="https://rmlsdisk.wikidot.com/local--files/file:github/Pyc" width="100px">
  </a><br/>
  <img alt="Py-Crawler-ICON" src="https://rmlsdisk.wikidot.com/local--files/file:github/pyctext.png" width="300px">
  <p>Archive your wikidot</p>
  <img alt="" src="https://img.shields.io/github/license/Remelens/WD-crawler">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/v/release/Remelens/ED-Crawler?include_prereleases">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/stars/Remelens/WD-crawler">
</div>

----------

## Wiki HTML code archive (WD-crawler)

This is used to create a crawler project for crawling all the pages existing on the wiki and for static read-only versions of the website after the disaster. It may not be applicable to the recovery project, but it provides a basis for the recovery page.

Currently, this applies to all Wikidot websites, but in order to prevent malicious crawlers, any website must have a/system: list all pages page to crawl.

### **Configuration requirements**
```
Create a page on your website URL/system: list-all-pages and add [[module Pages preview="true"]] code
```

### **Crawler installation**

Please click the latest version displayed in the 'Releases' sidebar and select "Source Code" to download.

### **Crawler operation**
* Enable PyCrawlerGUI.exe at runtime.
* Enter your URL at the URL and click OK.
* Go to check the next number of page X of X (in this example, the next x) displayed under the URL/system: list-all-pages page of your website
* Enter this number in pages [if you fill in more than one (set this number to X, X ≠ 0), it will output 1~X HTML files (name: pages1~pagesX. html), but (X-1) and X are the same], and then wrap.
* Wait quietly for the program to finish executing. There will be a pop-up prompt.
* Finished? Remember to move the html folder to avoid confusion.

### **Screenshot**
<img alt="" src="https://s1.ax1x.com/2023/02/20/pSXVpQJ.jpg" width="300px">  
<img alt="" src="https://s1.ax1x.com/2023/02/20/pSXExWF.jpg" width="300px">  
<img alt="" src="https://s1.ax1x.com/2023/02/20/pSXEzz4.jpg" width="300px">

### **Feedback address**

Error or bug encountered? Come [here](https://github.com/Remelens/WD-crawler/issues) Feedback.

Have new function ideas, but don't know where to feedback? Come [here](https://github.com/Remelens/WD-crawler/issues) Feedback.

Can you provide us with technical assistance? Come [here](https://github.com/Remelens/WD-crawler/fork) Pull the branch to modify it.

----------

```
Copyright (c) 2022-2023 Remelens
All Rights Reserved.

The icon "Py-Crawler-worm" is made by hatoyama_ kumiko and is applicable to CC-BY-SA-4.0 protocol.

The application made by RedPanda Dev-Cpp , Visual Basic 6.0 and Windows Notepad.
```
