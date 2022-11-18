// Object: AimerModifierData
// ClassId: 146
// RuntimeId: 60352
// TypeInfo: 0x0000000144F44AB0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class AimerModifierData : public Core::Asset {
        Float32 LookSpeedMultiplier; // 0x20
        Boolean OnlyInSupportedShooting; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(AimerModifierData) == 0x28);
}
#pragma pack(pop)