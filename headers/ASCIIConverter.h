#pragma once
#include "TextConverter.h"
#include <string>
#include <iostream>
using namespace std;
class ASCIIConverter :
    public TextConverter
{
private:
       string asciiText;

public:
    void convertCharacter(char c) override;
    void convertFontChange(const string& font) override;
    void convertParagraph() override;
    string getASCIIText();

};

