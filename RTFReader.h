#pragma once
#include "TextConverter.h"
#include <string>
#include <iostream>
using namespace std;
class RTFReader
{
private:
	TextConverter * builder;

public :
	explicit RTFReader(TextConverter* builder);
	void parserRTF(const string  & rtfData);



};

