// Input
// Gồm 4 dòng lần lượt là Họ tên, Lớp, Ngày sinh và Điểm GPA.
// Trong đó:
// -Họ tên không quá 30 chữ cái.
// -Lớp theo đúng định dạng thường dùng ở PTIT
// -Ngày sinh có đủ 3 phần ngày tháng năm nhưng có thể chưa đúng chuẩn
// dd/mm/yyyy.
// -Điểm GPA đảm bảo trong thang điểm 4 với 2 nhiều nhất 2 số sau dấu phẩy.
// Output
// -Ghi thông tin sinh viên trên 1 dòng, mỗi thông tin cách nhau 1 khoảng trống
#include <iostream>
#include <iomanip>
using namespace std;
class SinhVien
{
private:
    string ma,ten,ns,lop;
    double gpa;
public:
    SinhVien(){
        ma = ten =lop =ns = "";
        gpa = 0;
    };
    SinhVien(string ten, string ns, double gpa){
        this->ten = ten;
        this->ns = ns;
        this->gpa = gpa;
    }
    friend void nhap(SinhVien&);
    friend void in(SinhVien);
};
void nhap (SinhVien &a){
    a.ma = "21021571";
    getline(cin, a.ten);
    cin >>a.lop >> a.ns >> a.gpa;
    if (a.ns[2] != '/') a.ns = "0"  + a.ns;
    if (a.ns[5] != '/') a.ns.insert(3,"0");
}

void in (SinhVien a){
    cout << a.ma << " "<<a.ten<<" "<<a.lop<< " " <<a.ns <<" "<<
    fixed << setprecision (2) << " " << a.gpa << endl;
}

#define a() a

int main()
{
    SinhVien a(); //SinhVien a
    nhap (a);
    in (a);
    return 0;
}
