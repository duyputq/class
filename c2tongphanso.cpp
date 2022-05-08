//Có hai số nguyên dương lần lượt là tử số và mẫu số
// in ra tong hai so
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
        friend PhanSo operator + (PhanSo, PhanSo);
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
PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo tong(1,1);
    tong.tu = a.tu * b.mau + b.tu * a.mau;
    tong.mau = a.mau * b.mau;
    tong.rutgon();
    return tong;
}


int main() {
	PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}