#include "ASCIIConverter.h"




void ASCIIConverter:: convertCharacter(char c) {
	
	asciiText += c;
}
void  ASCIIConverter::convertFontChange (const string& font) {
	asciiText += "[ASCIIFont: " + font + "]";

}
void  ASCIIConverter::convertParagraph() {

	asciiText += "\n {ASCIIParagraph}";
}
string ASCIIConverter::getASCIIText() {

	return asciiText;

}