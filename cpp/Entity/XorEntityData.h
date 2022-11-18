// Object: XorEntityData
// ClassId: 3927
// RuntimeId: 56778
// TypeInfo: 0x0000000144EE5CD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class XorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean In1; // 0x24
        Boolean In2; // 0x25
        Boolean AlwaysWriteOut; // 0x26
        char pad_0x27[0x1];
    }; // 0x28
    static_assert(sizeof(XorEntityData) == 0x28);
}
#pragma pack(pop)