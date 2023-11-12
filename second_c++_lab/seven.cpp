/*7. Дана следующая программа, переделайте все соответствующие
обращения к членам класса так, чтобы в них явно присутствовал указатель
this.
#include <iostream>
using namespace std;
class myclass
{
int a, b;
public:
myclass(int n, int m) { a = n; b = m; }
int add() { return a + b; }
void show();
};
void myclass::show()
{
int t;
t = add(); // вызов функции-члена
cout << t << "\n";
}
int main()
{
myclass ob(10, 14);
ob.show();
return 0;
}*/

#include <iostream>
using namespace std;

class myclass
{
    int a, b;
    public:
    myclass(int n, int m) { this->a = n; this->b = m; }
    int add() { return this->a + this->b; }
    void show();
};

void myclass::show()
{
    int t;
    t = this->add(); // вызов функции-члена
    cout << t << "\n";
}

int main()
{
    myclass ob(10, 14);
    ob.show();
    return 0;
}