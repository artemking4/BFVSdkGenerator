// Object: NestedConditionalPropertyEntityData
// ClassId: 2901
// RuntimeId: 58157
// TypeInfo: 0x0000000144DBEFB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class NestedConditionalPropertyEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 TypeHash; // 0x24
        Array<Int32> ConditionHashes; // 0x28
        Array<Int32> ValueHashes; // 0x30
        Boolean EvaluateOnEvent; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(NestedConditionalPropertyEntityData) == 0x40);
}
#pragma pack(pop)