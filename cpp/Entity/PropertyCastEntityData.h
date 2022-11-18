// Object: PropertyCastEntityData
// ClassId: 3052
// RuntimeId: 59222
// TypeInfo: 0x0000000144EE42D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class PropertyCastEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Precision; // 0x24
        Float32 FloatValue; // 0x28
        Int32 IntValue; // 0x2C
        Uint32 UintValue; // 0x30
        char pad_0x34[0x4];
        CString StringValue; // 0x38
        Boolean IntToChar; // 0x40
        Boolean BoolValue; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(PropertyCastEntityData) == 0x48);
}
#pragma pack(pop)