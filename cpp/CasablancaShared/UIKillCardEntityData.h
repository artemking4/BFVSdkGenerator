// Object: UIKillCardEntityData
// ClassId: 3721
// RuntimeId: 54622
// TypeInfo: 0x0000000144D5FAE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIKillCardEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString KilledByYourselfSid; // 0x28
        CString KilledByAdminSid; // 0x30
        CString KilledByRedeploySid; // 0x38
        CString KilledByFallSid; // 0x40
        CString KilledForDesertingSid; // 0x48
        CString KilledByRoadkillSid; // 0x50
        CString KilledByBarbedWireSid; // 0x58
        CString KilledByDebrisSid; // 0x60
        CString KilledByFireSid; // 0x68
        CString KilledByDrowningSid; // 0x70
        CString KilledByGasSid; // 0x78
        CString KilledInActionSid; // 0x80
    }; // 0x88
    static_assert(sizeof(UIKillCardEntityData) == 0x88);
}
#pragma pack(pop)