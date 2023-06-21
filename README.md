# Nạp chồng toán tử hiển thị "&lt;&lt;"
Khi bạn muốn hiển thị đối tượng bằng cout thì nạp chồng toán tử "&lt;&lt;" là xong <br>
<br>
ostream &operator<<(ostream &dt_cout, PhanSo dt_PhanSo){<br>
    \tdt_cout << dt_PhanSo.tu << "/" << dt_PhanSo.mau;<br>
<br>
    \treturn dt_cout;<br>
}<br>
