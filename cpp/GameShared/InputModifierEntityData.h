// Object: InputModifierEntityData
// ClassId: 2803
// RuntimeId: 55248
// TypeInfo: 0x0000000144E784C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace GameShared {
    class InputModifierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Action; // 0x24
        Float32 Offset; // 0x28
        Float32 Scale; // 0x2C
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(InputModifierEntityData) == 0x38);
}
#pragma pack(pop)