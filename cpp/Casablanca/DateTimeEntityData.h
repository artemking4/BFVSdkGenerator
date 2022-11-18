// Object: DateTimeEntityData
// ClassId: 2602
// RuntimeId: 23026
// TypeInfo: 0x0000000144C1D800
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int64.h"
#include "../Casablanca/DateTimePoint.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DateTimeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Int64 EpochTime; // 0x28
        Casablanca::DateTimePoint DateTime; // 0x30
        Boolean TriggerOnStart; // 0x38
        Boolean TriggerOnPropertyChange; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(DateTimeEntityData) == 0x40);
}
#pragma pack(pop)