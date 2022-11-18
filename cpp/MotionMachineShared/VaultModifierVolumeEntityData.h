// Object: VaultModifierVolumeEntityData
// ClassId: 3478
// RuntimeId: 3479
// TypeInfo: 0x0000000144EFA930
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/VaultModifierType.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../MotionMachineShared/VaultModifierBox.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class VaultModifierVolumeEntityData : public Entity::SpatialEntityData {
        Core::Vec3 Dimensions; // 0x60
        MotionMachineShared::VaultModifierType ModifierType; // 0x70
        Float32 StartOffset; // 0x74
        Float32 EndOffset; // 0x78
        Float32 MaxApproachAngle; // 0x7C
        Array<MotionMachineShared::VaultModifierBox> VaultModifierBoxDatas; // 0x80
        Boolean Enabled; // 0x88
        Boolean ResolveLinkUsingManager; // 0x89
        char pad_0x8A[0x6];
    }; // 0x90
    static_assert(sizeof(VaultModifierVolumeEntityData) == 0x90);
}
#pragma pack(pop)