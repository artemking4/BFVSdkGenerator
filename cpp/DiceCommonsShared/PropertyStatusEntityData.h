// Object: PropertyStatusEntityData
// ClassId: 3074
// RuntimeId: 37478
// TypeInfo: 0x0000000144DBEE30
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class PropertyStatusEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 TypeHash; // 0x24
        Int32 InHash; // 0x28
        Boolean AlwaysSendEvents; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(PropertyStatusEntityData) == 0x30);
}
#pragma pack(pop)