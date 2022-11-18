// Object: WalkSettings
// ClassId: 5643
// RuntimeId: 62591
// TypeInfo: 0x0000000144C19630
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class WalkSettings : public Core::DataContainer {
        Float32 StartWalkingDistance; // 0x18
        Float32 StopWalkingDistance; // 0x1C
        Boolean RequireLineOfSight; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(WalkSettings) == 0x28);
}
#pragma pack(pop)