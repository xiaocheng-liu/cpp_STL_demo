/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description :                                                             *
*****************************************************************************/

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(10);
    ms.insert(20);
    ms.insert(30);
    ms.insert(50);
    //{10,20,10,20,30,50}  -----> {10,10,20,20,30,50} 插入时即会自动排序
    cout << "发现20的位置在" << *ms.find(20) << endl;   //这样是找不出来的哟

    int i = 0;
    for (multiset<int>::iterator it = ms.begin(); it != ms.find(20); it++, i++) {}
    cout << "发现20的位置在" << i << endl;    //由于是从0开始计算的因此答案是2

    return 0;
}