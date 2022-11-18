// Object: AIBlockerEntityData
// ClassId: 1974
// RuntimeId: 25499
// TypeInfo: 0x0000000144BFF050
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIBlockerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 BoundsExpansion; // 0x30
        Float32 SlowDistance; // 0x40
        Float32 StopDistance; // 0x44
        Float32 MinSpeedForBoundsExpansion; // 0x48
        Boolean EnableOnInit; // 0x4C
        Boolean AllowMovementInsideBounds; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(AIBlockerEntityData) == 0x50);
}
#pragma pack(pop)