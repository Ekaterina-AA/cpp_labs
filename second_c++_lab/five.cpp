/*
доделать


5. Дан следующий класс:
class planet
{
 int moons;
 double dist_from_sun; // в милях
 double diameter;
 double mass;
public:
 //...
 double get_miles()
 {
 return dist_from_sun;
 }
};
создайте функцию Hght(), получающую в качестве аргумента объект
типа planet и возвращающую число секунд, за которые свет достигает
планеты. (Предположим, что скорость света равна 186000 миль в секунду и
что значение dist_from_sun, т. е. расстояние от Солнца, задано в милях.)

5. a. Используя следующее объявление класса, создайте массив из 10
элементов и инициализируйте переменную ch значениями от А до J.
Покажите, что массив на самом деле содержит эти значения.
class letters
{
char ch;
public:
letters(char c) { ch = c; }
char get_ch() { return ch; }
};

5. б. Измените инициализацию переменной ch так, чтобы использовать
ее длинную форму (т. е. чтобы конструктор letters явно вызывался в списке
инициализации).
*/
#include <iostream>
using namespace std;

class planet
{
    int moons;
    double dist_from_sun; // в милях
    double diameter;
    double mass;

    public:
    planet(int miles) {dist_from_sun = miles;}
    //...
    double get_miles()
    {
        return dist_from_sun;
    }
};

double Hght(planet p)
{
    const double speed_of_light = 186000; 
    double time_to_reach = p.get_miles() / speed_of_light; 
    return time_to_reach;
}

class letters
{
    char ch;
    public:
    letters(char c = ' ') : ch(c) { } //{ ch = c; }
    char get_ch() { return ch; }
};

int main()
{
    planet earth(92960000);
    cout << "Time for light to reach Earth: " << Hght(earth) << " seconds" << endl << endl;

    letters ob[10];
    char counter_for_chars = 'A';
    for (int counter = 0; counter < 10; counter++)
    {
        letters ob2(counter_for_chars);
        ob[counter] = ob2;
        cout << ob[counter].get_ch() << ' ';
        counter_for_chars++;
    }
    return 0;
}