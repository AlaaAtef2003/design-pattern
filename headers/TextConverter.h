#pragma once
#include <string>
#include <iostream>
using namespace std;
class TextConverter
{   public:
    virtual void convertCharacter(char c) = 0;
    virtual void convertFontChange(const string & font) = 0;
    virtual void convertParagraph() = 0;
    virtual ~TextConverter() = default;
};

