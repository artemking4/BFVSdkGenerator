// Object: TransformAreaQueryEntityData
// ClassId: 3586
// RuntimeId: 44072
// TypeInfo: 0x0000000144DF9440
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class TransformAreaQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform Transform; // 0x30
    }; // 0x70
    static_assert(sizeof(TransformAreaQueryEntityData) == 0x70);
}
#pragma pack(pop)