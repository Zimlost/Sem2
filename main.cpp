#include "sdt.h"
#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;

//Программа является учебной
int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int a,b;
    cout<<"Введите значение первого числа: ";
    cin>>a;
    cout<<"Введите значение второго числа: ";
    cin>>b;
    cout<<"Сумма введенных чисел: "<<a+b<<"\n";
    cout<<"Разность введенных чисел: "<<a-b<<"\n";
    cout<<"Частное введенных чисел: "<<a/b<<"\n";
    cout<<"Произведение введенных чисел: "<<a*b<<"\n";
}
