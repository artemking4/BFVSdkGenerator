// Object: PhysicsActionBaseData
// ClassId: 2946
// RuntimeId: 17218
// TypeInfo: 0x0000000144DEDD20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Core/AudioCurve.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class PhysicsActionBaseData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 BlendFactor; // 0x24
        Float32 InputBlendFactor; // 0x28
        Float32 ClampLinAcc; // 0x2C
        Float32 ClampAngAcc; // 0x30
        char pad_0x34[0x4];
        Core::AudioCurve BlendFactorCurve; // 0x38
        Core::AudioCurve CollisionResponseCurve; // 0x48
    }; // 0x58
    static_assert(sizeof(PhysicsActionBaseData) == 0x58);
}
#pragma pack(pop)