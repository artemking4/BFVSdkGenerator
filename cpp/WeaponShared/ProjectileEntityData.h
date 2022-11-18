// Object: ProjectileEntityData
// ClassId: 3312
// RuntimeId: 27523
// TypeInfo: 0x0000000144F7B160
#include "../Physics/GamePhysicsEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/ExplosionEntityData.h"
#include "../WeaponShared/WeaponSuppressionData.h"
#include "../Entity/MaterialDecl.h"
#include "../WeaponShared/AntHitReactionWeaponType.h"
#include "../Audio/EntityVoiceOverInfo.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class ProjectileEntityData : public Physics::GamePhysicsEntityData {
        Float32 InitialSpeed; // 0xA0
        Float32 TimeToLive; // 0xA4
        Uint32 MaxCount; // 0xA8
        Float32 InitMeshHideTime; // 0xAC
        Float32 VisualConvergeDistance; // 0xB0
        Float32 VisualConvergenceDelay; // 0xB4
        Float32 VisualConvergenceDuration; // 0xB8
        Float32 ProxyVisualConvergenceDelay; // 0xBC
        Float32 ProxyVisualConvergenceDuration; // 0xC0
        char pad_0xC4[0x4];
        GameShared::ExplosionEntityData Explosion; // 0xC8
        WeaponShared::WeaponSuppressionData SuppressionData; // 0xD0
        Entity::MaterialDecl MaterialPair; // 0xD8
        WeaponShared::AntHitReactionWeaponType HitReactionWeaponType; // 0xDC
        Audio::EntityVoiceOverInfo VoiceOverInfo; // 0xE0
        Boolean DetonateOnTimeout; // 0xE8
        Boolean ServerProjectileDisabled; // 0xE9
        Boolean HideOnDetonation; // 0xEA
        char pad_0xEB[0x5];
    }; // 0xF0
    static_assert(sizeof(ProjectileEntityData) == 0xF0);
}
#pragma pack(pop)