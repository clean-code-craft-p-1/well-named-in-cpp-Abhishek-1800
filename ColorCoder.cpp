#include"ColorCoder.h"
#include"Global.h"

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        TelCoColorCoder::MajorColor majorColor = 
            (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        TelCoColorCoder::MinorColor minorColor =
            (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }
    int GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}