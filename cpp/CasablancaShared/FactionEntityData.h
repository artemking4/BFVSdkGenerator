// Object: FactionEntityData
// ClassId: 2736
// RuntimeId: 9304
// TypeInfo: 0x0000000144D29F20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FactionEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId TeamId; // 0x24
    }; // 0x28
    static_assert(sizeof(FactionEntityData) == 0x28);
}
#pragma pack(pop)