#include <iostream>
using namespace std;


class Shape{
    public:
        virtual float getArea() = 0;
};

class Circle:public Shape{
    float r;
public:
    Circle(float _r):r(_r){}
    float getArea(){
        return r*r*3.14;
    }
};

class Square:public Shape{
    float l;
public:
    Square(float _l):l(_l){}
    float getArea(){
        return l*l;
    }
};

class Rectangle:public Shape{
    float l,w;
public:
    Rectangle(float _l,float _w):l(_l),w(_w){}
    float getArea(){
        return l*w;
    }
};

class Triangle:public Shape{
    float base,hight;
public:
    Triangle(float _base,float _hight):base(_base),hight(_hight){}
    float getArea(){
        return base/2.0 * hight;
    }
};

int main ()
{
    Shape* s;
    int c,a,b;
again:
    cout << endl;
    cout << "1.Circle\n"
         << "2.Square\n"
         << "3.Rectangle\n"
    << "4.Triangle\n";
    cout << "Enter Your Choice:";
    cin >> c;
    switch (c) {
        case 1:
        cout << "Enter r:";
        cin >> a;
        s = new Circle(a);
        break;
        case 2:
        cout << "Enter l:";
        cin >> a;
        s = new Square(a);
        break;
        case 3:
        cout << "Enter l:";
        cin >> a;
        cout << "Enter w:";
        cin >> b;
        s = new Rectangle(a,b);
        break;
        case 4:
        cout << "Enter base:";
        cin >> a;
        cout << "Enter hight:";
        cin >> b;
        s = new Triangle(a,b);
        break;
        default:
        goto again;
    }
    cout << "Area is " << s->getArea() << endl;
    goto again;
}
