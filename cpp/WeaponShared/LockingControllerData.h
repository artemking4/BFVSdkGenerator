// Object: LockingControllerData
// ClassId: 4236
// RuntimeId: 22440
// TypeInfo: 0x0000000144F7AE60
#include "../Core/DataContainer.h"
#include "../WeaponShared/ZoomLevelLockData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../WeaponShared/LockingAndHomingData.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class LockingControllerData : public Core::DataContainer {
        Array<WeaponShared::ZoomLevelLockData> ZoomLevelLock; // 0x18
        Float32 LockTime; // 0x20
        Float32 UnLockTime; // 0x24
        Float32 ReleaseTime; // 0x28
        Float32 ReleaseOnNewTargetTime; // 0x2C
        Float32 SampleRate; // 0x30
        Float32 HoldStillThreshold; // 0x34
        Float32 CheckVisibilityLength; // 0x38
        Float32 RayLength; // 0x3C
        Float32 AcceptanceAngle; // 0x40
        Float32 AngleConstant; // 0x44
        Float32 DistanceConstant; // 0x48
        Float32 Sensitivity; // 0x4C
        Float32 MinimumLockTime; // 0x50
        WeaponShared::LockingAndHomingData LockingWeaponData; // 0x54
        Boolean LockOnVisibleTargetsOnly; // 0x60
        Boolean RequireAmmoToLock; // 0x61
        Boolean PositionOnly; // 0x62
        Boolean LockOnWorldSpacePos; // 0x63
        Boolean NormalizeConstantWeights; // 0x64
        Boolean CheckTargetLockStrengthOnRaycast; // 0x65
        Boolean LockOnVehicles; // 0x66
        Boolean LockOnEmptyVehicles; // 0x67
        Boolean LockOnCharacters; // 0x68
        Boolean LockOnCharactersInOpenEntries; // 0x69
        Boolean IgnoreHeigthLockDistance; // 0x6A
        Boolean LockInCombatAreaOnly; // 0x6B
        char pad_0x6C[0x4];
    }; // 0x70
    static_assert(sizeof(LockingControllerData) == 0x70);
}
#pragma pack(pop)