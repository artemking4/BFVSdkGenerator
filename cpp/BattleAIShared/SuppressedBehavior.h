// Object: SuppressedBehavior
// ClassId: 4950
// RuntimeId: 24132
// TypeInfo: 0x0000000144C07560
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SuppressedBehavior : public Core::DataContainer {
        Float32 SuppressedTime; // 0x18
        Float32 TargetSquadTime; // 0x1C
    }; // 0x20
    static_assert(sizeof(SuppressedBehavior) == 0x20);
}
#pragma pack(pop)