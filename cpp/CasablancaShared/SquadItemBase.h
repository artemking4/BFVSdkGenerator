// Object: SquadItemBase
// ClassId: 394
// RuntimeId: 40101
// TypeInfo: 0x0000000144D35630
#include "../Core/DataContainerPolicyAsset.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/SquadItemType.h"
#include "../GameShared/UnlockAssetBase.h"
#include "../Global/Uint32.h"
#include "../Global/Guid.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/KillSwitchNode.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadItemBase : public Core::DataContainerPolicyAsset {
        CasablancaShared::SquadItemType ItemType; // 0x20
        char pad_0x24[0x4];
        GameShared::UnlockAssetBase UnlockAsset; // 0x28
        Uint32 UnlockIdentifier; // 0x30
        Guid CustomizationGuid; // 0x34
        Int32 Cost; // 0x44
        Int32 MaxSimultaneousCountPerTeam; // 0x48
        Float32 ReservationTimeout; // 0x4C
        Float32 TimeToLive; // 0x50
        Float32 CoolDownDuration; // 0x54
        CasablancaShared::KillSwitchNode KillSwitch; // 0x58
        Boolean Enabled; // 0x60
        Boolean RequireUnlock; // 0x61
        Boolean ExternalOwnershipOfCreatedPrefab; // 0x62
        Boolean ShowAsIdleWhenRunning; // 0x63
        Boolean StartCooldownAfterUse; // 0x64
        Boolean HideItemCount; // 0x65
        Boolean RequiresTargeting; // 0x66
        char pad_0x67[0x1];
    }; // 0x68
    static_assert(sizeof(SquadItemBase) == 0x68);
}
#pragma pack(pop)