// Object: BFRayCastRoundRobinData
// ClassId: 158
// RuntimeId: 45205
// TypeInfo: 0x0000000144D31720
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFRayCastRoundRobinData : public Core::Asset {
        Float32 RaycastsPerSecond; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFRayCastRoundRobinData) == 0x28);
}
#pragma pack(pop)