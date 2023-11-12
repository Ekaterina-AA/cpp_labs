/*
2. Создайте класс t_and__d, которому при его создании передается
текущее системное время и дата в виде параметров конструктора. Этот класс
должен включать в себя функцию-член, выводящую время и дату на экран.
(Подсказка: Для нахождения и вывода на экран этих данных
воспользуйтесь стандартной библиотечной функцией времени и даты.)


Дан следующий базовый класс:
class area_cl
{
public:
 double height;
 double width;
};
создайте два производных класса rectangle и isosceles, которые
наследуют базовый класс агеа_с1. Каждый класс должен включать в себя
функцию агеа(), которая возвращает площадь соответственно
прямоугольника (rectangle) и равнобедренного треугольника (isosceles). Для
инициализации переменных height и width (высота и длина основания,
соответственно) используйте конструктор с параметрами.*/

#include <iostream>
#include <ctime>


using namespace std;

class t_and_d
{
    time_t now;
    struct tm *current;

    public:
    t_and_d()
    {
        now = time(NULL);
        current = localtime(&now);
    }
    void showDateTime()
    {
        cout << "Current date and time: " << asctime(current);
    }
};


class area_cl
{
public:
 double height;
 double width;
};

class rectangle: public area_cl
{
    public:
    rectangle(double height_from_user, double width_from_user) {height = height_from_user; width = width_from_user;}
    double area()
    {
        return height * width;
    }
};

class isosceles: public area_cl
{
    public:
    isosceles(double height_from_user, double width_from_user) {height = height_from_user; width = width_from_user;}
    double area()
    {
        return height * width * 0.5;
    }
};

int main()
{
    t_and_d obj;
    obj.showDateTime();
    cout << endl;

    rectangle rect1(4.0, 3.0);
    isosceles isos1(4.0, 5.0);
    cout << "S of rectangle: " << rect1.area() << endl << "S of isosceles: " << isos1.area() << endl;
    return 0;
}