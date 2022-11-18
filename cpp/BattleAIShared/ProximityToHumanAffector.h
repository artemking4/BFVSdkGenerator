// Object: ProximityToHumanAffector
// ClassId: 4551
// RuntimeId: 48102
// TypeInfo: 0x0000000144C11580
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class ProximityToHumanAffector : public Core::DataContainer {
        Float32 StartAffectorDistanceToHuman; // 0x18
        Float32 DecreaseAmountPerSecondMin; // 0x1C
        Float32 DecreaseAmountPerSecondMax; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ProximityToHumanAffector) == 0x28);
}
#pragma pack(pop)