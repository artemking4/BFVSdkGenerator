// Object: VaultPathlinkData
// ClassId: 82
// RuntimeId: 51514
// TypeInfo: 0x0000000144C18F30
#include "../BattleAIShared/AIPathLinkData.h"
#include "../BattleAIShared/AILocoVaultTaskData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class VaultPathlinkData : public BattleAIShared::AIPathLinkData {
        BattleAIShared::AILocoVaultTaskData VaultWaypointData; // 0x60
    }; // 0xD0
    static_assert(sizeof(VaultPathlinkData) == 0xD0);
}
#pragma pack(pop)