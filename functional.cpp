// functional.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "vector"
#include "map"
#include "set"
#include "Functor.h"
int main(int argc, char* argv[])
{
	std::set<int> s;
	push_back(s)(1)(2)(3);
	std::vector<int> v;
	push_back(v)(1)(2)(3);
	std::map<int, int> m;
	push_back(m)(1, 1)(2, 2)(3, 3);
	system("pause");
	return 0;
}

