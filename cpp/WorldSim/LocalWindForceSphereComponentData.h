// Object: LocalWindForceSphereComponentData
// ClassId: 1798
// RuntimeId: 38267
// TypeInfo: 0x0000000144EC0A40
#include "../WorldSim/LocalWindForceComponentBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceSphereComponentData : public WorldSim::LocalWindForceComponentBaseData {
        Float32 Radius; // 0xB0
        char pad_0xB4[0xC];
    }; // 0xC0
    static_assert(sizeof(LocalWindForceSphereComponentData) == 0xC0);
}
#pragma pack(pop)