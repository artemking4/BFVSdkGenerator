// Object: GenerateMipmapsFilterType
// RuntimeId: 17700
// TypeInfo: 0x0000000144F16C90

namespace Render {
    enum GenerateMipmapsFilterType {
        GenerateMipmapsFilter_Box = 0,
        GenerateMipmapsFilter_BoxRgbSharpenAlpha = 1,
        GenerateMipmapsFilter_BoxRgbKeepAlphaTestCoverage = 2,
        GenerateMipmapsFilter_AlphaWeightedBox = 3,
        GenerateMipmapsFilter_Triangle = 4,
        GenerateMipmapsFilter_Cubic = 5,
        GenerateMipmapsFilter_MitchellFilter = 6,
        GenerateMipmapsFilter_Lanczos = 7,
        GenerateMipmapsFilter_Kaiser = 8,
        GenerateMipmapsFilter_Nearest = 9,
        GenerateMipmapsFilter_BoxSharpened = 10
    };
}