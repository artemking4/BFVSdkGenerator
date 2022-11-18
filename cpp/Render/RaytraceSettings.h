// Object: RaytraceSettings
// ClassId: 4563
// RuntimeId: 30181
// TypeInfo: 0x0000000144F1C680
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Render {
    class RaytraceSettings : public Core::DataContainer {
        Float32 RaytraceTerrainCullRadius; // 0x18
        Uint32 RaytraceTerrainTriangleDensity; // 0x1C
        Boolean BlasOptimizeMemoryEnable; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(RaytraceSettings) == 0x28);
}
#pragma pack(pop)