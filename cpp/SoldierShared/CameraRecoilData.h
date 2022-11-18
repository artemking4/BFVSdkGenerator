// Object: CameraRecoilData
// ClassId: 1285
// RuntimeId: 9214
// TypeInfo: 0x0000000144F49BC0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class CameraRecoilData : public Core::DataContainer {
        Float32 SpringConstant; // 0x18
        Float32 SpringConstantZoomed; // 0x1C
        Float32 SpringDamping; // 0x20
        Float32 SpringDampingZoomed; // 0x24
        Float32 SpringMinThresholdAngle; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(CameraRecoilData) == 0x30);
}
#pragma pack(pop)