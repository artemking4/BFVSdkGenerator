// Object: HitTypeAngles
// ClassId: 4096
// RuntimeId: 16738
// TypeInfo: 0x0000000144D6CC30
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class HitTypeAngles : public Core::DataContainer {
        Float32 MaxHitAngleForGlancingHit; // 0x18
        Float32 MinHitAngleForCriticalHit; // 0x1C
    }; // 0x20
    static_assert(sizeof(HitTypeAngles) == 0x20);
}
#pragma pack(pop)