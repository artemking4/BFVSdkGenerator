// Object: UICustomize3DModelEntityData
// ClassId: 3621
// RuntimeId: 40752
// TypeInfo: 0x0000000144D219F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UICustomize3DModelEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 SoldierOffset; // 0x30
        Core::Vec3 VehicleOffset; // 0x40
        Core::Vec3 SoldierRotation; // 0x50
        Core::Vec3 VehicleRotation; // 0x60
        Float32 WeaponScreenWidthPercent; // 0x70
        Float32 WeaponRotationLerpSpeed; // 0x74
        Float32 WeaponRotationSpeed; // 0x78
        Float32 GamepadZoomSpeed; // 0x7C
        Float32 MouseZoomSpeed; // 0x80
        Float32 MouseRotationSpeed; // 0x84
        Float32 WeaponStartRotY; // 0x88
        Float32 WeaponStartRotZ; // 0x8C
        Float32 WeaponMaxAngleY; // 0x90
        Float32 WeaponMinAngleY; // 0x94
        Float32 WeaponMaxAngleZ; // 0x98
        Float32 RotAroundCameraY; // 0x9C
        Float32 WeaponAccessoryPivotLerpSpeed; // 0xA0
        Float32 SoldierRotationSpeed; // 0xA4
        Float32 VehicleRotationSpeed; // 0xA8
        Float32 NetworkThrottleTimer; // 0xAC
        Int32 CurrentState; // 0xB0
        Int32 CurrentTab; // 0xB4
        Int32 CurrentSlot; // 0xB8
        Int32 NextState; // 0xBC
        Int32 NextTab; // 0xC0
        Int32 NextSlot; // 0xC4
        Int32 SelectedState; // 0xC8
        char pad_0xCC[0x4];
    }; // 0xD0
    static_assert(sizeof(UICustomize3DModelEntityData) == 0xD0);
}
#pragma pack(pop)