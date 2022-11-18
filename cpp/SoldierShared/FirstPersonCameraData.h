// Object: FirstPersonCameraData
// ClassId: 1624
// RuntimeId: 45325
// TypeInfo: 0x0000000144F44A30
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class FirstPersonCameraData : public Core::DataContainer {
        char pad_0x18[0x8];
        Core::Vec3 Offset; // 0x20
        Core::Vec3 Rotation; // 0x30
    }; // 0x40
    static_assert(sizeof(FirstPersonCameraData) == 0x40);
}
#pragma pack(pop)