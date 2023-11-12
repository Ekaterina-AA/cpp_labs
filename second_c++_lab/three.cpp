/*3. Создайте класс prompt. Для вывода на экран строки-приглашения
включите в класс конструктор. Помимо строки-приглашения конструктор
должен выполнить ввод набранного вами целого. Сохраните это значение в
закрытой переменной count. При удалении объекта типа prompt должен быть
подан звуковой сигнал, причем столько раз, сколько задано пользователем в
переменной count.*/
#include <iostream>
#include <windows.h>

using namespace std;

class prompt
{
    int count;
    public:
    prompt()
    {
        cout << "Enter count:";
        cin >> count;
    }
    ~prompt() 
    {
        for (int i = 0; i < count; ++i) 
        {
            Beep(1000, 300);
        }
    }
};

int main()
{
    prompt ob;
    return 0;
}