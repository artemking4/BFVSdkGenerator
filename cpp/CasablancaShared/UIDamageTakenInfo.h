// Object: UIDamageTakenInfo
// ClassId: 5387
// RuntimeId: 63562
// TypeInfo: 0x0000000144D43550
#include "../Core/DataContainer.h"
#include "../UI/HitType.h"
#include "../Global/Float32.h"
#include "../GameplaySim/MaterialDamageType.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIDamageTakenInfo : public Core::DataContainer {
        UI::HitType HitType; // 0x18
        Float32 DamageTaken; // 0x1C
        Core::Vec3 DamageOrigin; // 0x20
        GameplaySim::MaterialDamageType MaterialType; // 0x30
        Float32 MaxTimeRemaining; // 0x34
        Float32 Angle; // 0x38
        Boolean VehicleDamage; // 0x3C
        char pad_0x3D[0x3];
    }; // 0x40
    static_assert(sizeof(UIDamageTakenInfo) == 0x40);
}
#pragma pack(pop)