#pragma once
#include "TextConverter.h"
#include <string>
#include <iostream>
using namespace std;
class TeXConverter :
    public TextConverter
{
private:
    string texText;

public:
    void convertCharacter(char c) override;
    void convertFontChange(const string& font) override;
    void convertParagraph() override;
    string  gettexText();


};

