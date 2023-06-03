#pragma once
#ifndef _MY_CLASS_H2
#define _MY_CLASS_H2
#include <iostream>
#include <string>
#include "Header.h"
namespace Show
{
	template <typename T> T show(T x, T y)
	{
		return sum(x, y);
	}
}
#endif