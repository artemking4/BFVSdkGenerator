// Object: BFUIBestSquadPlayerInfoObject
// ClassId: 1199
// RuntimeId: 1195
// TypeInfo: 0x0000000144D41C50
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUISoldierLoadoutObject.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBestSquadPlayerInfoObject : public Core::DataContainer {
        Uint64 OnlineId; // 0x18
        CasablancaShared::BFUISoldierLoadoutObject SoldierLoadout; // 0x20
        CString TagAndName; // 0x28
        CString KitIconId; // 0x30
        Int32 SquadPosition; // 0x38
        Boolean HasPrimaryWeapon; // 0x3C
        Boolean IsLocalPlayer; // 0x3D
        Boolean IsInLocalSquad; // 0x3E
        Boolean IsSquadLeader; // 0x3F
        Boolean CoopPlayerReady; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(BFUIBestSquadPlayerInfoObject) == 0x48);
}
#pragma pack(pop)