#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "ASCIIConverter.h"
#include "TeXConverter.h"
#include "TextWidgetConverter.h"
#include "RTFReader.h"
using namespace std;

int main()
{
	ASCIIConverter ASCIItext;
	RTFReader asciiReaderter(&ASCIItext);
	asciiReaderter.parserRTF( "@  hello$ world ! ");
	cout << "ASCII text  : " << ASCIItext.getASCIIText()<<endl <<"***********************************"<<endl;


	TeXConverter Textext;
	RTFReader TexReader(&Textext);
	TexReader.parserRTF("@  hello$ world ! ");
	cout << "Tex text  : " << Textext.gettexText() << endl << "***********************************" << endl;



	TextWidgetConverter TextWight;
	RTFReader TextWidgetReader(&TextWight);
	TextWidgetReader.parserRTF("@ hello$ world  ! ");
	cout << "TextWidget :" << TextWight.getTextWidget() << endl << "***********************************" << endl;


	return 0;
}