// Object: LocalWindForceSphereEntityData
// ClassId: 3403
// RuntimeId: 57036
// TypeInfo: 0x0000000144EC94E0
#include "../WorldSim/LocalWindForceEntityBaseData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace WorldSim {
    class LocalWindForceSphereEntityData : public WorldSim::LocalWindForceEntityBaseData {
        Float32 Radius; // 0x90
        char pad_0x94[0xC];
    }; // 0xA0
    static_assert(sizeof(LocalWindForceSphereEntityData) == 0xA0);
}
#pragma pack(pop)