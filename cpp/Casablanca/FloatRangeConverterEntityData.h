// Object: FloatRangeConverterEntityData
// ClassId: 2756
// RuntimeId: 4143
// TypeInfo: 0x0000000144C328F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FloatRangeConverterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 InStart; // 0x24
        Float32 InEnd; // 0x28
        Float32 OutStart; // 0x2C
        Float32 OutEnd; // 0x30
        Float32 InputValue; // 0x34
        Boolean FireEventsOnInit; // 0x38
        Boolean IgnoreAboveRangeCheck; // 0x39
        Boolean Invert; // 0x3A
        Boolean Clamp; // 0x3B
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(FloatRangeConverterEntityData) == 0x40);
}
#pragma pack(pop)