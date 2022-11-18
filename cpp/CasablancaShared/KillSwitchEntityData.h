// Object: KillSwitchEntityData
// ClassId: 2822
// RuntimeId: 29293
// TypeInfo: 0x0000000144D4A4F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/KillSwitchNode.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class KillSwitchEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::KillSwitchNode KillSwitch; // 0x28
        Int32 OutputPropertyHash; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(KillSwitchEntityData) == 0x38);
}
#pragma pack(pop)