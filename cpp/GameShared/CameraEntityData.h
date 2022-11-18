// Object: CameraEntityData
// ClassId: 3270
// RuntimeId: 45951
// TypeInfo: 0x0000000144E83540
#include "../GameShared/CameraEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class CameraEntityData : public GameShared::CameraEntityBaseData {
        Float32 Fov; // 0xB0
        Float32 NearPlane; // 0xB4
        Float32 FarPlane; // 0xB8
        char pad_0xBC[0x4];
    }; // 0xC0
    static_assert(sizeof(CameraEntityData) == 0xC0);
}
#pragma pack(pop)