#pragma once
#include "TextConverter.h"
#include <string >
#include <vector>
#include <iostream>
using namespace std;
class TextWidgetConverter :
    public TextConverter
{
private:
    string widgetData;

public:
    void convertCharacter(char c) override;
    void convertFontChange(const string& font) override;
    void convertParagraph() override;
    string getTextWidget();
};

