// Object: FlashlightModifier
// ClassId: 1625
// RuntimeId: 26606
// TypeInfo: 0x0000000144C05BE0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class FlashlightModifier : public Core::DataContainer {
        Float32 FlashlightConeRange; // 0x18
        Float32 FlashlightConeAngle; // 0x1C
    }; // 0x20
    static_assert(sizeof(FlashlightModifier) == 0x20);
}
#pragma pack(pop)