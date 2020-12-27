/*****************************************************************************
* @author      : hunter                                                      *
* @date        :                                                             *
* @file        :                                                             *
* @brief       :                                                             *
* @description :                                                             *
*****************************************************************************/

#include <iostream>
#include <stack>
using namespace std;
void newstack(stack <int> ss)
{
	stack <int> sg = ss;
	while (!sg.empty())
	{
		cout << '\t' << sg.top();
		sg.pop();
	}
	cout << '\n';
}
int main()
{
	stack <int> newst;
	newst.push(55);
	newst.push(44);
	newst.push(33);
	newst.push(22);
	newst.push(11);

	cout << "最新的堆栈是 : ";
	newstack(newst);
	cout << "\n newst.size() : " << newst.size();
	cout << "\n newst.top() : " << newst.top();
	cout << "\n newst.pop() : ";
	newst.pop();
	newstack(newst);
	return 0;
}