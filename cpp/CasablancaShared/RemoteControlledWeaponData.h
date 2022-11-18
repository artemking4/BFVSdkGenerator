// Object: RemoteControlledWeaponData
// ClassId: 5220
// RuntimeId: 57071
// TypeInfo: 0x0000000144D403D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RemoteControlledWeaponData : public CasablancaShared::BFWeaponData {
        Float32 SensitivityMultiplier; // 0x28
        Float32 MaxAimAngle; // 0x2C
        Float32 MaxPitchAngle; // 0x30
        Uint32 CorrectionIntervalTicks; // 0x34
        Int32 PitchAction; // 0x38
        Int32 YawAction; // 0x3C
    }; // 0x40
    static_assert(sizeof(RemoteControlledWeaponData) == 0x40);
}
#pragma pack(pop)