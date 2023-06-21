# Nạp chồng toán tử hiển thị "&lt;&lt;"
khi bạn muốn hiển thị đối tượng bằng cout thì nạp chồng toán tử "&lt;&lt;" là xong <br>
ostream &operator<<(ostream &dt_cout, PhanSo dt_PhanSo){
    dt_cout << dt_PhanSo.tu << "/" << dt_PhanSo.mau;

    return dt_cout;
}
