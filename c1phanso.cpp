//Có hai số nguyên dương lần lượt là tử số và mẫu số
//In ra phan so toi gian
#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo{
	private:
		long  tu, mau;
	public:
		PhanSo(long tu, long mau);
        friend istream& operator  >> (istream&, PhanSo&);
        friend ostream& operator  << (ostream&, PhanSo);
        void rutgon();
        
};

PhanSo::PhanSo (long tu, long mau) {
    this -> tu = tu;
    this->mau=mau;
}

istream& operator >> (istream& rac , PhanSo&a){
    rac >> a.tu >> a.mau;
    return rac;
}

ostream& operator << (ostream& out, PhanSo a) {
    out << a.tu << "/" <<a.mau;
    return out;
}

void PhanSo::rutgon(){
    long g = __gcd(tu,mau);
    tu = tu / g;
    mau = mau /g;
}


int main() {
	PhanSo p(1,2); // mặc định là nhập vào 1 và 2(hằng số) và KO ĐC ĐỂ TRỐNG
    cin >> p;   // nếu muốn thay đổi thì thêm lệnh cin là 	
	p.rutgon();
	cout << p;
	return 0;
}