#include "TextWidgetConverter.h"

void TextWidgetConverter::convertCharacter(char c) {
	widgetData += c;

}
void  TextWidgetConverter::convertFontChange(const string& font) {
	widgetData += "[TextWidgetfont:"+ font +"] ";
}
void  TextWidgetConverter::convertParagraph() {
	widgetData +="\n {TextWidgetParagraph} ";
}
string TextWidgetConverter::getTextWidget() {
	return  widgetData;
}
