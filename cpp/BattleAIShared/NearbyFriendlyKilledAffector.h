// Object: NearbyFriendlyKilledAffector
// ClassId: 4349
// RuntimeId: 60491
// TypeInfo: 0x0000000144C10A00
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class NearbyFriendlyKilledAffector : public Core::DataContainer {
        Float32 Radius; // 0x18
        Float32 DecreaseMin; // 0x1C
        Float32 DecreaseMax; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(NearbyFriendlyKilledAffector) == 0x28);
}
#pragma pack(pop)