// Object: EffectParameterList
// ClassId: 477
// RuntimeId: 14983
// TypeInfo: 0x0000000144E234A0
#include "../Core/Asset.h"
#include "../EffectBase/EffectParameter.h"

#pragma pack(push, 8)
namespace EffectBase {
    class EffectParameterList : public Core::Asset {
        Array<EffectBase::EffectParameter> Parameters; // 0x20
    }; // 0x28
    static_assert(sizeof(EffectParameterList) == 0x28);
}
#pragma pack(pop)