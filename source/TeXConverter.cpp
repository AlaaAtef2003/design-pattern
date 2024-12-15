#include "TeXConverter.h"

void TeXConverter:: convertCharacter(char c) {
	texText += c;
}
void  TeXConverter::convertFontChange(const string& font) {
	texText += " [ TeXfont :" + font + "]";
}
void  TeXConverter::convertParagraph() {
	texText += "  \n {TeXParagraph} ";
}
string  TeXConverter::gettexText() {
	return texText;
}
