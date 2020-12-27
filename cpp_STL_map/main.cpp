/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description : map测试                                                *
*****************************************************************************/

#include <iostream>  
#include <map>  
using namespace std;

int main()
{
    map<int, const char*> Employees;
    // 1) 使用数组索引符号进行赋值
    Employees[101] = "Nikita";
    Employees[105] = "John";
    Employees[103] = "Dolly";
    Employees[104] = "Deep";
    Employees[102] = "Aman";
    cout << "Employees[104]=" << Employees[104] << endl << endl;
    cout << "Map 大小: " << Employees.size() << endl;
    cout << endl << "自然顺序:" << endl;

    for (map<int, const char*>::iterator ii = Employees.begin(); ii != Employees.end(); ++ii)
    {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
    cout << endl << "相反顺序:" << endl;
    for (map<int, const char*>::reverse_iterator ii = Employees.rbegin(); ii != Employees.rend(); ++ii)
    {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }
}