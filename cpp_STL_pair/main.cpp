/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description :                                                             *
*****************************************************************************/

#include<iostream>
#include<string>
#include<utility>

using namespace std;

pair<string, int> getClass(int id) {
    return make_pair("DOTCPP!", id);
}

int main(int argc, char** argv) {
    pair<string, int> a;
    a = getClass(10);
    cout << a.first << " " << a.second << endl;
    return 0;
}