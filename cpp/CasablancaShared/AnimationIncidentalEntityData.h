// Object: AnimationIncidentalEntityData
// ClassId: 2055
// RuntimeId: 46265
// TypeInfo: 0x0000000144D6CA30
#include "../Entity/EntityData.h"
#include "../CasablancaShared/AnimationIncidentalWriteBinding.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class AnimationIncidentalEntityData : public Entity::EntityData {
        CasablancaShared::AnimationIncidentalWriteBinding AntOutputProperties; // 0x20
        Float32 MaxDistanceToCamera; // 0xAC
        Float32 MinAngleHitNormalY; // 0xB0
        Float32 MaxAngleHitNormalY; // 0xB4
        Float32 RayCastOffsetY; // 0xB8
        Float32 AngleOfRayForBraceLeft; // 0xBC
        Float32 MaxDistanceHitForBraceLeft; // 0xC0
        Float32 MinAngleHitForBraceLeft; // 0xC4
        Float32 MaxAngleHitForBraceLeft; // 0xC8
        Float32 AngleOfRayForBraceRight; // 0xCC
        Float32 MaxDistanceHitForBraceRight; // 0xD0
        Float32 MinAngleHitForBraceRight; // 0xD4
        Float32 MaxAngleHitForBraceRight; // 0xD8
        Float32 MaxDistanceHitForImpactForward; // 0xDC
        Float32 MinAngleHitForImpactForward; // 0xE0
        Float32 MaxAngleHitForImpactForward; // 0xE4
        Float32 MaxDistanceHitForGunDown; // 0xE8
        Float32 GroundIncidentCooldownTime; // 0xEC
        Float32 CooldownTimeRandomOffsetMax; // 0xF0
        char pad_0xF4[0x4];
        Array<Entity::MaterialDecl> IncidentalMaterials; // 0xF8
        Boolean IsEnabled; // 0x100
        Boolean ExcludeTerrain; // 0x101
        Boolean UseRoundRobin; // 0x102
        Boolean IsBraceLeftEnabled; // 0x103
        Boolean IsBraceRightEnabled; // 0x104
        Boolean IsImpactForwardEnabled; // 0x105
        Boolean IsGunDownEnabled; // 0x106
        Boolean IsGroundEnabled; // 0x107
    }; // 0x108
    static_assert(sizeof(AnimationIncidentalEntityData) == 0x108);
}
#pragma pack(pop)