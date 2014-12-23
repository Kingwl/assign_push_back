#pragma once
#include "stdafx.h"
#ifndef _ASSIGN_PUSH_
#define _ASSIGN_PUSH_
template <typename T>
class list_of_vector
{
public:
	list_of_vector(std::vector<T> &r):_Obj(&r){};
	~list_of_vector(){};
	list_of_vector<T>& operator()(const T &o)
	{
		_Obj->push_back(o);
		return *this;
	}
private:
	std::vector<T> *_Obj;
};

template <typename T1, typename T2>
class list_of_map
{
public:
	list_of_map(std::map<T1, T2> &r):_Obj(&r){};
	~list_of_map(){};
	list_of_map<T1, T2>& operator()(const T1 &k, const T2 &v)
	{
		_Obj->insert(std::make_pair(k, v));
		return *this;
	}
private:
	std::map<T1, T2> *_Obj;
};

template <typename T>
class list_of_set{
public:
	list_of_set(std::set<T> &s):_Obj(&s){};
	~list_of_set(){};
	list_of_set<T>& operator()(const T &v)
	{
		_Obj->insert(v);
		return *this;
	}
private:
	std::set<T> *_Obj;
};

template <typename T>
list_of_vector<T> push_back(std::vector<T> &vec)
{
	return list_of_vector<T>(vec);
}
template<typename T1, typename T2>
list_of_map<T1, T2> push_back(std::map<T1, T2> &m)
{
	return list_of_map<T1, T2>(m);
}
template <typename T>
list_of_set<T> push_back(std::set<T> &s)
{
	return list_of_set<T>(s);
}
#endif