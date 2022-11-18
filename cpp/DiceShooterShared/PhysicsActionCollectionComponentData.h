// Object: PhysicsActionCollectionComponentData
// ClassId: 1820
// RuntimeId: 2984
// TypeInfo: 0x0000000144DEDDA0
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class PhysicsActionCollectionComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        Float32 BlendFactor; // 0x84
        Float32 ClampAngularSpeed; // 0x88
        Float32 ClampLinearSpeed; // 0x8C
        Float32 ClampLinAcc; // 0x90
        Float32 ClampAngAcc; // 0x94
        Float32 MinCollisionSpeedForResponse; // 0x98
        Float32 HeavyDynamicCollisionMassLimit; // 0x9C
        Boolean IsEnabled; // 0xA0
        Boolean ReportHeavyDynamicCollisionAsStatic; // 0xA1
        char pad_0xA2[0xE];
    }; // 0xB0
    static_assert(sizeof(PhysicsActionCollectionComponentData) == 0xB0);
}
#pragma pack(pop)