// Object: UIShowPlayerProfileEntityData
// ClassId: 3765
// RuntimeId: 41631
// TypeInfo: 0x0000000144C80E10
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIPlayerObject.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UIShowPlayerProfileEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIPlayerObject Player; // 0x28
    }; // 0x30
    static_assert(sizeof(UIShowPlayerProfileEntityData) == 0x30);
}
#pragma pack(pop)