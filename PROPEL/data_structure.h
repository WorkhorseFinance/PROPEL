#pragma once

#ifndef data_structure
#define data_structure

#include "constants.h"
#include <string>

//-----------------------------------------------------
// a container that can store a variable of any type.
//
// Created by Brenton Smith 20161005
//-----------------------------------------------------
class Variable
{
private:
	double rVal;
	int iVal;
	string sVal;
public:
	Variable();
};

#endif // !data_structure
