// Object: VaultWaypointData
// ClassId: 5651
// RuntimeId: 33545
// TypeInfo: 0x0000000144C12700
#include "../BattleAIShared/AbstractLocoWaypointData.h"
#include "../BattleAIShared/AILocoVaultTaskData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class VaultWaypointData : public BattleAIShared::AbstractLocoWaypointData {
        char pad_0x48[0x8];
        BattleAIShared::AILocoVaultTaskData VaultTask; // 0x50
    }; // 0xC0
    static_assert(sizeof(VaultWaypointData) == 0xC0);
}
#pragma pack(pop)