// Object: DynamicAvoidanceEntityData
// ClassId: 2673
// RuntimeId: 457
// TypeInfo: 0x0000000144E6E350
#include "../Entity/EntityData.h"
#include "../GameShared/DynamicAvoidanceMode.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/AntDynamicAvoidanceBinding.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class DynamicAvoidanceEntityData : public Entity::EntityData {
        GameShared::DynamicAvoidanceMode RepelOthers; // 0x20
        GameShared::DynamicAvoidanceMode ReportPredictedCollision; // 0x24
        Float32 CollisionRadius; // 0x28
        GameShared::AntDynamicAvoidanceBinding AntBinding; // 0x2C
        Core::Realm Realm; // 0x7C
        Boolean AffectedByRepellingForce; // 0x80
        Boolean PredictedByOthers; // 0x81
        char pad_0x82[0x6];
    }; // 0x88
    static_assert(sizeof(DynamicAvoidanceEntityData) == 0x88);
}
#pragma pack(pop)