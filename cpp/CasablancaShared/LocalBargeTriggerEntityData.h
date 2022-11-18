// Object: LocalBargeTriggerEntityData
// ClassId: 3384
// RuntimeId: 55999
// TypeInfo: 0x0000000144D2ABA0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class LocalBargeTriggerEntityData : public Entity::SpatialEntityData {
        Float32 DelayBetweenUses; // 0x60
        Float32 UseWithinRadius; // 0x64
        Float32 UseWithinAngle; // 0x68
        Float32 UseWithinWidth; // 0x6C
        Float32 UseWithinHeight; // 0x70
        Float32 UseWithinXOffset; // 0x74
        Float32 UseWithinYOffset; // 0x78
        Float32 UseMinVelocityStart; // 0x7C
        Float32 UseMinVelocityEnd; // 0x80
        Float32 UseMinVelocityEndRadius; // 0x84
        Float32 FacingInteractorAngle; // 0x88
        Boolean Enabled; // 0x8C
        char pad_0x8D[0x3];
    }; // 0x90
    static_assert(sizeof(LocalBargeTriggerEntityData) == 0x90);
}
#pragma pack(pop)