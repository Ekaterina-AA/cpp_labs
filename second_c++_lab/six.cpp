/*6. Используя следующее объявление класса, создайте массив из 10
элементов, инициализируйте переменную num значениями от 1 до 10, а
переменную sqr — квадратом num.
class squares {
int num, sqr;
public:
squares(int a, int b) { num = a; sqr = b; }
void show() { cout << num << ' ' << sqr << "\n"; }
};
*/

#include <iostream>
#include <ctime>

using namespace std;

class squares 
{
int num, sqr;

public:
squares(int a, int b) { num = a; sqr = b; }
void show() { cout << num << ' ' << sqr << "\n"; }
};

int main()
{
    squares ob[10] = {{1, 1*1}, {2, 2*2}, {3, 3*3},{4, 4*4},{5, 5*5},{6, 6*6},{7, 7*7},{8, 8*8},{9, 9*9},{10, 10*10}};

    for(int counter = 0; counter < 10; counter++)
    {
        ob[counter].show();
    }
    return 0;
}