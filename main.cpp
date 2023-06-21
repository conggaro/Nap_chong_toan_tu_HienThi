// Yêu cầu

// 1. nhập chồng toán tử "<<" 
// để hiển thị đối tượng bằng cout

#include <iostream>
using namespace std;

class PhanSo{
    public:
        int tu;
        int mau;
        int stt;

    private:
        static int dem_dt;

    public:
        // hàm khởi tạo không tham số
        PhanSo(){
            tu = 0;
            mau = 1;

            dem_dt ++;

            // hứng giá trị của đếm
            // vào stt
            stt = dem_dt;
        }

        // hàm khởi tạo có tham số
        PhanSo(int data1, int data2){
            if (data2 == 0)
            {
                tu = 0;
                mau = 1;
            }
            else if (data2 != 0)
            {
                tu = data1;
                mau = data2;
            }
            
            dem_dt ++;

            // hứng giá trị của đếm
            // vào stt
            stt = dem_dt;
        }

        // hàm hủy
        ~PhanSo(){
            // cout << "Huy doi tuong\n";
        }

        // nạp chồng toán tử "<<"
        friend ostream &operator<<(ostream &dt_cout, PhanSo dt_PhanSo);
};

// gán giá trị cho biến static
int PhanSo::dem_dt = 0;

// hàm bạn
ostream &operator<<(ostream &dt_cout, PhanSo dt_PhanSo){
    dt_cout << dt_PhanSo.tu << "/" << dt_PhanSo.mau;

    return dt_cout;
}

int main(){
    // tạo đối tượng
    PhanSo dt1 = PhanSo(2, 3);
    PhanSo dt2 = PhanSo(1, 2);
    PhanSo dt3;

    // hiển thị đối tượng
    cout << "Hien thi doi tuong:\n";
    cout << dt1 << "\n";
    cout << dt2 << "\n";
    cout << dt3 << "\n\n";

    // hiển thị số thứ tự
    cout << "Hien thi so thu tu:\n";
    cout << dt1.stt << "\n";
    cout << dt2.stt << "\n";
    cout << dt3.stt << "\n\n";

    return 0;
}