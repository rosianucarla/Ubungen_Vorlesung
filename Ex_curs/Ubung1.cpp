#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
T add(T array[], int a, int b, T Anfangswert = 0) {

	for (int i = a; i <= b; i++)
		Anfangswert += array[i];


	return Anfangswert;
}


template <typename T2>
auto adauga = [](T2 v[], int a, int b, T2 anfangswert = 0) {

	for (int i = a; i <= b; i++)
		anfangswert += v[i];
	return anfangswert;
};

