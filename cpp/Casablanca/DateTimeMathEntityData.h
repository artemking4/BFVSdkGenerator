// Object: DateTimeMathEntityData
// ClassId: 2603
// RuntimeId: 22609
// TypeInfo: 0x0000000144C1D680
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Casablanca/DateTimePoint.h"
#include "../Global/Uint16.h"

#pragma pack(push, 8)
namespace Casablanca {
    class DateTimeMathEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Casablanca::DateTimePoint DateTime; // 0x28
        Uint16 Years; // 0x30
        Uint16 Months; // 0x32
        Uint16 Days; // 0x34
        Uint16 Hours; // 0x36
        Uint16 Minutes; // 0x38
        Uint16 Seconds; // 0x3A
        Boolean TriggerOnStart; // 0x3C
        Boolean TriggerOnDateTimeChange; // 0x3D
        Boolean UseSubtraction; // 0x3E
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(DateTimeMathEntityData) == 0x40);
}
#pragma pack(pop)