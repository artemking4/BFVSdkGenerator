// Object: EnumLogicEntityBaseData
// ClassId: 2700
// RuntimeId: 398
// TypeInfo: 0x0000000144ED6920
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"

namespace Entity {
    class EnumLogicEntityBaseData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 TypeNameHash; // 0x24
    }; // 0x28
    static_assert(sizeof(EnumLogicEntityBaseData) == 0x28);
}