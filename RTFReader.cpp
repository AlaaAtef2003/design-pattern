#include "RTFReader.h"
 RTFReader:: RTFReader(TextConverter* builder) : builder(builder) {}

void RTFReader::parserRTF(const string& rtfData) {
    for (char x : rtfData) {
        switch (x) {
        case '$':  // Font change symbol (using single quotes for characters)
            builder->convertFontChange("ARIAL");
            break;

        case '@':  // Paragraph break symbol
            builder->convertParagraph();
            break;

        default:  // Default case for normal characters
            builder->convertCharacter(x);
            break;
        }
    }
}
