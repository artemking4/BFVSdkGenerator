// Object: BFRayCastEntityData
// ClassId: 3099
// RuntimeId: 8016
// TypeInfo: 0x0000000144D316A0
#include "../DiceShooterShared/RayCastEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../DiceCommonsShared/EntityAttachData.h"
#include "../CasablancaShared/BFRayCastRoundRobinData.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFRayCastEntityData : public DiceShooterShared::RayCastEntityData {
        Core::LinearTransform Transform; // 0x70
        Float32 RayHorizontalAngle; // 0xB0
        Float32 RayVerticalAngle; // 0xB4
        Float32 RayLength; // 0xB8
        char pad_0xBC[0x4];
        DiceCommonsShared::EntityAttachData Attach; // 0xC0
        CasablancaShared::BFRayCastRoundRobinData RoundRobinSettings; // 0xC8
        Int32 UpdateOrder; // 0xD0
        Boolean LockHorizontalRotation; // 0xD4
        Boolean LockVerticalRotation; // 0xD5
        Boolean IncludedInRoundRobin; // 0xD6
        Boolean UseDefaultMaterialForSoundMaterial; // 0xD7
        char pad_0xD8[0x8];
    }; // 0xE0
    static_assert(sizeof(BFRayCastEntityData) == 0xE0);
}
#pragma pack(pop)