#include <iostream>
#include <string>
using namespace std;
class SinhVien
{
private:
    string id,ten,ns;
    double gpa;
public:
    SinhVien();//constructer
    SinhVien(string,string,string,double);
    void nhap();
    void in();
    ~SinhVien();
};

SinhVien::SinhVien()
{
    id,ten,ns = "";
    gpa = 0;
}

SinhVien::SinhVien(string ma,string name, string birth, double diem){
    id = ma;
    ten = name;
    ns = birth;
    gpa = diem;
}

void SinhVien::nhap(){
    cout << "nhap id: ";
    cin >> id;
    cout << "nhap ten: ";
    getline(cin,ten);
    
    cout << "nhap ns: ";
    cin >> ns;
    cout << "nhap gpa: ";
    cin >> gpa;
}

void SinhVien::in(){
    cout << id << " " << ten << " "<< ns << " " << gpa;
    cout << endl;
}

SinhVien::~SinhVien(){
    cout << "Doi tuong da bi huy" <<endl;
}

int main(int argc, char const *argv[])
{
    SinhVien x;
    x.nhap();
    x.in();
    return 0;
}
