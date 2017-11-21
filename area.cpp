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
    Circle c(10);
    Rectangle r(10,20);
    Square s(30);
    Triangle t(20,10);
    
    cout << "Circle=" << c.getArea() << endl;
    cout << "Rectangle=" << r.getArea() << endl;
    cout << "Square=" << s.getArea() << endl;
    cout << "Triangle=" << t.getArea() << endl;
}
