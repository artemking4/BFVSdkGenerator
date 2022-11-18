// Object: TrajectoryMoverEntityData
// ClassId: 3584
// RuntimeId: 26454
// TypeInfo: 0x0000000144DBE830
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class TrajectoryMoverEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 StartPosition; // 0x30
        Core::Vec3 EndPosition; // 0x40
        Float32 Height; // 0x50
        Float32 Duration; // 0x54
        Boolean AutoStart; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(TrajectoryMoverEntityData) == 0x60);
}
#pragma pack(pop)