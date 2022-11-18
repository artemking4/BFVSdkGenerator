// Object: LocalWindForceConeEntityData
// ClassId: 3402
// RuntimeId: 46462
// TypeInfo: 0x0000000144EC9460
#include "../WorldSim/LocalWindForceEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceConeEntityData : public WorldSim::LocalWindForceEntityBaseData {
        Float32 InnerRadius; // 0x90
        Float32 OuterRadius; // 0x94
        Float32 ConeInnerAngle; // 0x98
        Float32 ConeOuterAngle; // 0x9C
    }; // 0xA0
    static_assert(sizeof(LocalWindForceConeEntityData) == 0xA0);
}
#pragma pack(pop)