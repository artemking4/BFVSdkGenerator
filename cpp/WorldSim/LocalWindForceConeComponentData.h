// Object: LocalWindForceConeComponentData
// ClassId: 1797
// RuntimeId: 24980
// TypeInfo: 0x0000000144EC09C0
#include "../WorldSim/LocalWindForceComponentBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceConeComponentData : public WorldSim::LocalWindForceComponentBaseData {
        Float32 InnerRadius; // 0xB0
        Float32 OuterRadius; // 0xB4
        Float32 ConeInnerAngle; // 0xB8
        Float32 ConeOuterAngle; // 0xBC
    }; // 0xC0
    static_assert(sizeof(LocalWindForceConeComponentData) == 0xC0);
}
#pragma pack(pop)