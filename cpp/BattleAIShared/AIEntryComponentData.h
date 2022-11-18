// Object: AIEntryComponentData
// ClassId: 1696
// RuntimeId: 31713
// TypeInfo: 0x0000000144BFEED0
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIEntryComponentData : public Entity::GameComponentData {
        Core::Vec3 TargetPositionOverride; // 0x80
        Float32 YawOffset; // 0x90
        Float32 Suppression; // 0x94
        Boolean HoldFire; // 0x98
        Boolean AllowGrenades; // 0x99
        Boolean SendFireEvents; // 0x9A
        Boolean AllowOccupant; // 0x9B
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(AIEntryComponentData) == 0xA0);
}
#pragma pack(pop)