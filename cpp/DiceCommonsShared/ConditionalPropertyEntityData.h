// Object: ConditionalPropertyEntityData
// ClassId: 2533
// RuntimeId: 25384
// TypeInfo: 0x0000000144DB5C90
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ConditionalPropertyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 TypeHash; // 0x24
        Int32 ValueIfFalsePropertyHash; // 0x28
        Int32 ValueIfTruePropertyHash; // 0x2C
        Int32 OutHash; // 0x30
        Boolean Condition; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(ConditionalPropertyEntityData) == 0x38);
}
#pragma pack(pop)