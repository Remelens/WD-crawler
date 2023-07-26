<div class="center" align="center">
  <a href="#">
    <img alt="Py-Crawler-ICON" src="https://rmlsdisk.wikidot.com/local--files/file:github/Pyc" width="100px">
  </a><br/>
  <img alt="Py-Crawler-ICON" src="https://rmlsdisk.wikidot.com/local--files/file:github/pyctext.png" width="300px">
  <p>Sao lưu wikidot của bạn</p>
  <img alt="" src="https://img.shields.io/github/license/Remelens/WD-crawler">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/v/release/Remelens/WD-Crawler?include_prereleases">&nbsp;&nbsp;<img alt="" src="https://img.shields.io/github/stars/Remelens/WD-crawler">
</div>

----------

## Lưu mã Wiki HTML (Py-crawler)

Đây là công trình dùng để tạo ra một công trình leo sâu, dùng để trèo lên tất cả các trang tồn tại trên wiki, dùng để chỉ đọc phiên bản tại các trang web sau khi bị thiên tai. 
Có thể không áp dụng cho công trình khôi phục, nhưng căn cứ vào việc khôi phục trang. 
Hiện nay, điều này áp dụng cho tất cả các trang WikiLeaks, nhưng để ngăn chặn việc bò sâu độc hại, bất kỳ trang web nào phải có trang fanpage mới có thể bò được.

### **Yêu cầu hồ sơ**

```
Thiết lập một trang trên địa chỉ URL/pages của bạn, thêm vào [[module Pages preview="true"]] Mã
```

### **Cài đặt chương trình leo sâu**
Vui lòng nhấp vào phiên bản mới nhất được hiển thị trong thanh bên `Releases` và chọn "Source Code" để tải xuống.

### **Đang chạy.**
* Thời gian chạy được thực hiện trong thư mục gốc của dự án với bash `./ main`。
* Nhập địa chỉ web của bạn vào URL và thực hiện theo dòng mới.
* Kiểm tra URL/system:list-all-pages của trang web của bạn để xem số tiếp theo của trang X of X (trong ví dụ này là x tiếp theo)
* Nhập số này vào pages [Nếu bạn điền nhiều (X, X ≠ 0), nó sẽ xuất ra tệp HTML từ 1 đến X (tên pages1~pagesX.html) nhưng (X-1) và X là cùng một dòng]
* Lẳng lặng chờ đợi trình tự thi hành xong đi, sẽ có nhắc nhở cửa sổ đạn.

Xong chưa? Hãy nhớ di chuyển thư mục HTML để tránh nhầm lẫn.

### **Địa chỉ phản hồi**
Gặp lỗi hay BUG? 
Đến [Đây](https://github.com/Remelens/WD-crawler/issues), hoặc đến [tại đây]

Có ý tưởng về tính năng mới, nhưng không biết phản hồi ở đâu? [Đây](https://github.com/Remelens/WD-crawler/issues)Phản hồi。

Anh có thể giúp chúng tôi về kỹ thuật không? [Đây](https://github.com/Remelens/WD-crawler/fork) Kéo nhánh để chỉnh sửa đi.

----------

```
Copyright (c) 2022-2023 HelloOSMe
All Rights Reserved.

Bản quyền (c) 2022-2023 HelloOSMe
Tất cả các quyền được bảo lưu.

Ứng dụng Linux được tạo bởi RedPanda Dev Cpp, Replit và Windows Notepad.
```
