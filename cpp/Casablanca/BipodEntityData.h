// Object: BipodEntityData
// ClassId: 2433
// RuntimeId: 13040
// TypeInfo: 0x0000000144C834C0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BipodEntityData : public Entity::EntityData {
        Float32 Distance; // 0x20
        Float32 Height; // 0x24
        Float32 BoxWidth; // 0x28
        Float32 BoxHeight; // 0x2C
        Float32 OffsetY; // 0x30
        Float32 OffsetYCrouch; // 0x34
        Float32 OffsetYProne; // 0x38
        Float32 MaxSpeed; // 0x3C
        Float32 MaxLeaning; // 0x40
        Float32 EyesObstructionDistance; // 0x44
        Float32 EyesObstructionWidth; // 0x48
        Float32 EyesObstructionHeight; // 0x4C
        Float32 DeployDelay; // 0x50
        Float32 DeployCooldown; // 0x54
        Float32 SupportCheckInterval; // 0x58
        Boolean ProneForceDeploy; // 0x5C
        Boolean CrouchForceDeploy; // 0x5D
        char pad_0x5E[0x2];
    }; // 0x60
    static_assert(sizeof(BipodEntityData) == 0x60);
}
#pragma pack(pop)