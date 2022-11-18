// Object: SquadLeaderKilledAffector
// ClassId: 4911
// RuntimeId: 40557
// TypeInfo: 0x0000000144C12800
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SquadLeaderKilledAffector : public Core::DataContainer {
        Float32 DecreaseMin; // 0x18
        Float32 DecreaseMax; // 0x1C
    }; // 0x20
    static_assert(sizeof(SquadLeaderKilledAffector) == 0x20);
}
#pragma pack(pop)