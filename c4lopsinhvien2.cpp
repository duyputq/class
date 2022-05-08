#include <iostream>
#include <iomanip>
using namespace std;

#define a() a

class SinhVien
{
private:
    string ma,ten,lop,ns;
    double gpa;
public:
    SinhVien(){
        ma = ten =lop =ns = "";
        gpa = 0;
    }
    friend ostream& operator << (ostream& out, SinhVien a);
    friend istream& operator >> (istream& in, SinhVien&); 
};

ostream& operator << (ostream& out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

istream& operator >> (istream& in, SinhVien&a){
    a.ma = "21021571";
    getline(in, a.ten);
    in >> a.lop >> a.ns >> a.gpa;
    if (a.ns[2] != '/') a.ns = "0"  + a.ns;
    if (a.ns[5] != '/') a.ns.insert(3,"0");
    return in;
}

int main(int argc, char const *argv[])
{
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}

