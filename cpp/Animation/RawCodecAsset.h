// Object: RawCodecAsset
// ClassId: 214
// RuntimeId: 16006
// TypeInfo: 0x0000000144DFAA50
#include "../Animation/ClipCodecAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Animation {
    class RawCodecAsset : public Animation::ClipCodecAsset {
        Float32 ConstantQuaternionThreshold; // 0x20
        Float32 ConstantTranslationThreshold; // 0x24
        Float32 ConstantScaleThreshold; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(RawCodecAsset) == 0x30);
}
#pragma pack(pop)