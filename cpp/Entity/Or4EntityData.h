// Object: Or4EntityData
// ClassId: 2922
// RuntimeId: 50043
// TypeInfo: 0x0000000144EE5C50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Entity {
    class Or4EntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean In1; // 0x24
        Boolean In2; // 0x25
        Boolean In3; // 0x26
        Boolean In4; // 0x27
        Boolean AlwaysWriteOut; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(Or4EntityData) == 0x30);
}
#pragma pack(pop)