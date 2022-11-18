// Object: FloatPhysicsData
// ClassId: 1636
// RuntimeId: 56363
// TypeInfo: 0x0000000144F0EA00
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class FloatPhysicsData : public Core::DataContainer {
        Float32 Density; // 0x18
        Float32 FilledDensity; // 0x1C
    }; // 0x20
    static_assert(sizeof(FloatPhysicsData) == 0x20);
}
#pragma pack(pop)