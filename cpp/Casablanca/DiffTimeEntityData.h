// Object: DiffTimeEntityData
// ClassId: 2640
// RuntimeId: 50152
// TypeInfo: 0x0000000144C1D700
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Casablanca/DateTimePoint.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DiffTimeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Casablanca::DateTimePoint FirstDateTime; // 0x28
        Casablanca::DateTimePoint SecondDateTime; // 0x30
        Boolean TriggerOnStart; // 0x38
        Boolean TriggerOnFirstChanged; // 0x39
        Boolean TriggerOnSecondChanged; // 0x3A
        char pad_0x3B[0x5];
    }; // 0x40
    static_assert(sizeof(DiffTimeEntityData) == 0x40);
}
#pragma pack(pop)