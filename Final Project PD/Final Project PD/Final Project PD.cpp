#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x, y;

public:
    bidangDatar() {
        x = 0;
        y = 0;
    }
    virtual void input() {}
    virtual float Luas() { return 0; }
    virtual float Keliling() { return 0; }
    virtual void cekUkuran() {}

    void setX(int a) {
        this->x = a;
    }

    int getX() {
        return x;
    }

    void setY(int b) {
        this->y = b;
    }

    int getY() {
        return y;
    }
};

class lingkaran : public bidangDatar {
public:
    void input() {
        int r;
        cout << "Masukkan jejari lingkaran: ";
        cin >> r;
        setX(r);
    }

    float Luas() {
        float r = getX();
        return 3.14 * r * r;
    }

    float Keliling() {
        float r = getX();
        return 2 * 3.14 * r;
    }

    void cekUkuran() {
        float keliling = Keliling();
        if (keliling > 40) {
            cout << "Ukuran lingkaran adalah besar" << endl;
        }
        else if (keliling < 20) {
            cout << "Ukuran lingkaran adalah sedang" << endl;
        }
        else if (keliling < 10) {
            cout << "Ukuran lingkaran adalah kecil" << endl;
        }
    }
};

class Persegipanjang : public bidangDatar {
public:
    void input() {
        int p, l;
        cout << "Masukkan panjang persegipanjang: ";
        cin >> p;
        setX(p);

        cout << "Masukkan lebar persegipanjang: ";
        cin >> l;
        setY(l);
    }

    float Luas() {
        float p = getX();
        float l = getY();
        return p * l;
    }

    float Keliling() {
        float p = getX();
        float l = getY();
        return 2 * (p + l);
    }

    void cekUkuran() {
        float keliling = Keliling();
        if (keliling > 40) {
            cout << "Ukuran persegipanjang adalah besar" << endl;
        }
        else if (keliling < 20) {
            cout << "Ukuran persegipanjang adalah sedang" << endl;
        }
        else if (keliling < 10) {
            cout << "Ukuran persegipanjang adalah kecil" << endl;
        }
    }
};

int main() {
    char ulang;
    do {
        lingkaran lingkaran;
        Persegipanjang persegipanjang;

        cout << "Lingkaran Dibuat" << endl;

        lingkaran.input();
        cout << "Luas Lingkaran = " << lingkaran.Luas() << endl;
        cout << "Keliling Lingkaran = " << lingkaran.Keliling() << endl;
        lingkaran.cekUkuran();

        persegipanjang.input();
        cout << "Luas Persegipanjang = " << persegipanjang.Luas() << endl;
        cout << "Keliling PersegiPanjang = " << persegipanjang.Keliling() << endl;
        persegipanjang.cekUkuran();

        cout << "Apakah Anda ingin mengulang program? (Y/N): ";
        cin >> ulang;
        cout << endl;
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}
