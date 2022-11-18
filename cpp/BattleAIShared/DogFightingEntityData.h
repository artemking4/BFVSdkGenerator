// Object: DogFightingEntityData
// ClassId: 2664
// RuntimeId: 39749
// TypeInfo: 0x0000000144C199B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class DogFightingEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 ActivePilot; // 0x24
        Int32 TakeControlEntryIndex; // 0x28
        Float32 MaxTargetDistanceToFire; // 0x2C
        Float32 MaxAimAngleFaultToFire; // 0x30
        Float32 DefaultSpeed; // 0x34
        Float32 MaxSpeed; // 0x38
        Float32 CollisionRadiusModifier; // 0x3C
        Float32 MostAgileSpeed; // 0x40
        Int32 PriorityAsTarget; // 0x44
        Boolean DrawDebugInfo; // 0x48
        Boolean ShouldSelectTarget; // 0x49
        Boolean IsTarget; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(DogFightingEntityData) == 0x50);
}
#pragma pack(pop)