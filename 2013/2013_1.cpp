#include<iostream>
using namespace std;

class SoPhuc
{
private:
    int thuc; // Phan thuc
    int ao; // Phan ao
public:
    SoPhuc(int rl=0,int img=0):thuc(rl),ao(img){}
    
    int getReal() const{
        return thuc;
    }
    int getImag() const{
        return ao;
    }

    void nhap(){
        cout << "nhap phan thuc: ";
        cin >> thuc;
        cout << "nhap phan ao: ";
        cin >> ao;
    }
    void xuat(){
        cout << thuc;
        if(ao > 0){
            cout << " + " << ao <<"sqrt(7)";
        }
        else{
            cout << " + " << -ao <<"sqrt(7)";
        }
        cout << endl;
    }

    SoPhuc operator+(const SoPhuc& num) const{
        return SoPhuc(thuc + num.thuc,ao + num.ao);
    }

    SoPhuc operator-(const SoPhuc& num) const{
        return SoPhuc(thuc - num.thuc,ao - num.ao);
    } 

    SoPhuc operator-() const{
        return SoPhuc(-thuc,-ao);
    }
    SoPhuc operator*(const SoPhuc& num) const{
        int newReal = thuc * num.thuc + 7 * ao * num.ao;        // (a+b√7) * (c+d√7) = (a*c + 7*b*d) + (a*d + b*c)* √7
        int newImag = thuc * num.ao + ao * num.thuc;
        return SoPhuc(newReal,newImag);
    }
};

int main()
{
    SoPhuc num1,num2,ketqua;
    cout << "Nhap so thu nhat:\n";
    num1.nhap();
    cout << "Nhap so thu hai:\n";
    num2.nhap();

    ketqua = num1 + num2;
    cout << "Tong; ";
    ketqua.xuat();

    ketqua = num1 - num2;
    cout << "Hieu: ";
    ketqua.xuat();

    ketqua = -num1;
    cout << "Phep doi dau so thu nhat la: ";
    ketqua.xuat();

    ketqua = num1 * num2;
    cout << "Tich: ";
    ketqua.xuat();
    
    return 0;
}