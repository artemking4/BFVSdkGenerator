// Object: SvgImage
// ClassId: 781
// RuntimeId: 37485
// TypeInfo: 0x0000000144DF9FB0
#include "../DiceSvgRasterizerShared/SvgBaseImage.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceSvgRasterizerShared {
    class SvgImage : public DiceSvgRasterizerShared::SvgBaseImage {
        Float32 Width; // 0x28
        Float32 Height; // 0x2C
    }; // 0x30
    static_assert(sizeof(SvgImage) == 0x30);
}
#pragma pack(pop)