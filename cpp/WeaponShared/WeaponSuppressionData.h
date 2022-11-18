// Object: WeaponSuppressionData
// ClassId: 5699
// RuntimeId: 9837
// TypeInfo: 0x0000000144F7ACE0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponSuppressionData : public Core::DataContainer {
        Float32 BelowMinDistanceSuppression; // 0x18
        Float32 AboveMaxDistanceSuppression; // 0x1C
        Float32 MinDistance; // 0x20
        Float32 MaxDistance; // 0x24
    }; // 0x28
    static_assert(sizeof(WeaponSuppressionData) == 0x28);
}
#pragma pack(pop)