// Object: RimeConditionalStateEntityData
// ClassId: 3115
// RuntimeId: 46774
// TypeInfo: 0x0000000144F29F20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

namespace RimeElementsShared {
    class RimeConditionalStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean Condition; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(RimeConditionalStateEntityData) == 0x28);
}