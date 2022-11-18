// Object: AngleToTargetData
// ClassId: 2049
// RuntimeId: 42584
// TypeInfo: 0x0000000144DBBB80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class AngleToTargetData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(AngleToTargetData) == 0x28);
}
#pragma pack(pop)