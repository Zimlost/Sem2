#include "sdt.h"
#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;

//��������� �������� �������
int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int a,b;
    cout<<"������� �������� ������� �����: ";
    cin>>a;
    cout<<"������� �������� ������� �����: ";
    cin>>b;
    cout<<"����� ��������� �����: "<<a+b<<"\n";
    cout<<"�������� ��������� �����: "<<a-b<<"\n";
    cout<<"������� ��������� �����: "<<a/b<<"\n";
    cout<<"������������ ��������� �����: "<<a*b<<"\n";
}
