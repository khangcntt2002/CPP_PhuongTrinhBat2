// CPP_PhuongTrinhBat2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2, delta;

    cout << "Nhap he so a:"; cin >> a;
    cout << "Nhap he so b:"; cin >> b;
    cout << "Nhap he so c:"; cin >> c;

    if (a == 0) {
        if (b == 0) {
            if (c != 0) {
                cout << "Phuong trinh vo nghiem";
            }
            else {
                cout << "Phuong trinh vo so nghiem";
            }
        }
        else {
            x1 = x2 = -c / b;
            cout << "Phuong trinh co nghiem x = " << x1;
        }
    }
    else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            cout << "Phuong tring vo nghiem";
        }
        else if (delta == 0) {
            x1 = x2 = -b / (2 * a);
            cout << "Phuong tring vo nghiem kep x1 = x2 = " << x1;
        }
        else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet";
            cout << "\nx1 = " << x1;
            cout << "\nx2 = " << x2;
        }
    }

    return 0;

}