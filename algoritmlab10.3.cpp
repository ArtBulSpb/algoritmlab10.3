#include <iostream>
int num, sum = 0, a;


using namespace std;

int summator(int number) {
    if (num == 0) {
        return sum;
    }
    a = num % 10;
    num = (num - a) / 10;
    sum = sum + a;
    return summator(a);
}

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите натуральное число ";
    cin >> num;
    cout << summator(num) << endl;
    return 0;
}
