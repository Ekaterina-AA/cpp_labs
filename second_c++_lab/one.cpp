/*1. Создайте класс stopwatch для имитации секундомера. Используйте
конструктор для начальной установки секундомера в 0. Образуйте две
функции-члена start() и stop() соответственно для запуска и остановки
секундомера. Включите в класс и функцию-член show() для вывода на экран
величины истекшего промежутка времени. Также используйте деструктор
для автоматического вывода на экран времени, прошедшего с момента
создания объекта класса stopwatch, до его удаления. (Для простоты время
приведите в секундах.)*/

#include <iostream>
#include <ctime>

using namespace std;

class stopwatch
{
    clock_t creation_of_object;
    clock_t start_;
    clock_t end;

    public:
    stopwatch()
    {
        creation_of_object = clock();
    }

    void start() 
    {
        start_ = clock();
    }

    void stop()
    {
        end = clock();
    }

    void show() 
    {
        cout << "passed time: " << (end - start_)/CLOCKS_PER_SEC << " seconds" << endl;
    }

    ~stopwatch()
    {
        clock_t death_of_object;
        death_of_object = clock();
        cout << "time from creation of object to its death: " << (death_of_object - creation_of_object)/CLOCKS_PER_SEC << " seconds" << endl;
    }
};

int main() 
{
    char c;
    stopwatch timer;

    cout << "write any character to starts the timer: ";
    cin >> c;
    timer.start();

    cout << "write any character to end the timer: ";
    cin >> c;
    timer.stop();
    timer.show();

    cout << "write any character to end the programm: ";
    cin >> c;
    return 0;
}
