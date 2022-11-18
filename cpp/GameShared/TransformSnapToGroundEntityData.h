// Object: TransformSnapToGroundEntityData
// ClassId: 3595
// RuntimeId: 33033
// TypeInfo: 0x0000000144E762C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class TransformSnapToGroundEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform In; // 0x30
        Float32 DistanceToGround; // 0x70
        Float32 RayCastLength; // 0x74
        Float32 RayCastUpOffset; // 0x78
        Boolean AlignWithGroundNormal; // 0x7C
        Boolean IgnoreWater; // 0x7D
        char pad_0x7E[0x2];
    }; // 0x80
    static_assert(sizeof(TransformSnapToGroundEntityData) == 0x80);
}
#pragma pack(pop)