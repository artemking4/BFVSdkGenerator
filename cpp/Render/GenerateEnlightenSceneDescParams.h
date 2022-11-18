// Object: GenerateEnlightenSceneDescParams
// ClassId: 4087
// RuntimeId: 38944
// TypeInfo: 0x0000000144F16DD0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace Render {
    class GenerateEnlightenSceneDescParams : public Core::DataContainer {
        Array<Guid> InstanceFilter; // 0x18
        Array<Guid> EnlightenAssetFilter; // 0x20
        Boolean ApproximateSystemInfluences; // 0x28
        Boolean DistributedBuild; // 0x29
        Boolean CacheEnable; // 0x2A
        Boolean VerboseLogging; // 0x2B
        Boolean SaveGeomericsDebugData; // 0x2C
        Boolean PreVisualizationOnly; // 0x2D
        Boolean GlobalSolutionEnable; // 0x2E
        Boolean DisableTerrain; // 0x2F
        Boolean DebugDataOnly; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(GenerateEnlightenSceneDescParams) == 0x38);
}
#pragma pack(pop)