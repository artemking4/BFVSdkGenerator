// Object: EnlightenRuntimeConfig
// ClassId: 490
// RuntimeId: 28859
// TypeInfo: 0x0000000144EB9A60
#include "../RenderBase/EnlightenRuntimeConfigBaseAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace WorldRender {
    class EnlightenRuntimeConfig : public RenderBase::EnlightenRuntimeConfigBaseAsset {
        Uint32 JobCount; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(EnlightenRuntimeConfig) == 0x28);
}
#pragma pack(pop)