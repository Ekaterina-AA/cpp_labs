/*4. Создайте класс dice, который содержит закрытую целую переменную.
Создайте функцию gо11(), использующую стандартный генератор случайных
чисел randQ, для получения чисел от 1 до 6. Функция roll() должна вывести
это значение на экран. */
#include <iostream>
#include <time.h>
using namespace std;

class dice
{
    int a;
    public:
    int roll()
    {
        srand(time(NULL));
        a = rand() % 6 + 1;
        return a;
    }
};

int main()
{
    dice ob;
    cout << ob.roll();
    return 0;
}