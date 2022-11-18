// Object: EnlightenBaseAsset
// ClassId: 487
// RuntimeId: 30801
// TypeInfo: 0x0000000144F23D90
#include "../Core/Asset.h"
#include "../RenderBase/RadiosityMixMode.h"

namespace RenderBase {
    class EnlightenBaseAsset : public Core::Asset {
        RenderBase::RadiosityMixMode MixFeatureMode; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EnlightenBaseAsset) == 0x28);
}