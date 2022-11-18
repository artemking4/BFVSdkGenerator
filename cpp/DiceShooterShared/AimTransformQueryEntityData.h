// Object: AimTransformQueryEntityData
// ClassId: 2035
// RuntimeId: 64084
// TypeInfo: 0x0000000144DE4E70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/AimTransformQueryEntityUpdatePass.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AimTransformQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::AimTransformQueryEntityUpdatePass UpdatePass; // 0x24
        Boolean AlwaysEnabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(AimTransformQueryEntityData) == 0x30);
}
#pragma pack(pop)