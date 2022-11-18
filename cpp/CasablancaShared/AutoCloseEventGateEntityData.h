// Object: AutoCloseEventGateEntityData
// ClassId: 2072
// RuntimeId: 5528
// TypeInfo: 0x0000000144D4AEF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AutoCloseEventGateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AutoCloseEventGateEntityData) == 0x28);
}
#pragma pack(pop)