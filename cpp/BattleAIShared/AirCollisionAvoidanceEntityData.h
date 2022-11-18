// Object: AirCollisionAvoidanceEntityData
// ClassId: 2041
// RuntimeId: 61795
// TypeInfo: 0x0000000144C12100
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AirCollisionAvoidanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 PlayerScale; // 0x24
        Float32 OBBScale; // 0x28
        Float32 EntityScale; // 0x2C
        Float32 MaxDistance; // 0x30
        Float32 RayLength; // 0x34
        Float32 RayLengthSameDirection; // 0x38
        Boolean IgnoreSameDirectionObjects; // 0x3C
        Boolean PrioritizeHumans; // 0x3D
        Boolean AutoActivate; // 0x3E
        char pad_0x3F[0x1];
    }; // 0x40
    static_assert(sizeof(AirCollisionAvoidanceEntityData) == 0x40);
}
#pragma pack(pop)