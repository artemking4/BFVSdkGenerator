// Object: UIGameJoinEntityData
// ClassId: 3707
// RuntimeId: 62513
// TypeInfo: 0x0000000144D210F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIGameJoinEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIGameJoinEntityData) == 0x28);
}
#pragma pack(pop)