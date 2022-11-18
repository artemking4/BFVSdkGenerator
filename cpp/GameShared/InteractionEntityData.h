// Object: InteractionEntityData
// ClassId: 3380
// RuntimeId: 4290
// TypeInfo: 0x0000000144E6D3D0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Audio/SoundAsset.h"

#pragma pack(push, 16)
namespace GameShared {
    class InteractionEntityData : public Entity::SpatialEntityData {
        Float32 UseWithinRadius; // 0x60
        Float32 UseWithinAngle; // 0x64
        Float32 UseWithinWidth; // 0x68
        Float32 UseWithinHeight; // 0x6C
        Float32 UseWithinXOffset; // 0x70
        Float32 UseWithinYOffset; // 0x74
        Float32 UseMinVelocityStart; // 0x78
        Float32 UseMinVelocityEnd; // 0x7C
        Float32 UseMinVelocityEndRadius; // 0x80
        Float32 FacingInteractorAngle; // 0x84
        Uint32 MaxUses; // 0x88
        Float32 DisplayWithinRadius; // 0x8C
        Audio::SoundAsset PreInteractionSoundEffect; // 0x90
        Boolean TestIfOccluded; // 0x98
        Boolean AllowInteractionViaRemoteEntry; // 0x99
        Boolean UseDisplayWithinRadius; // 0x9A
        Boolean Enabled; // 0x9B
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(InteractionEntityData) == 0xA0);
}
#pragma pack(pop)