// Object: TerrainSettings
// ClassId: 5159
// RuntimeId: 8456
// TypeInfo: 0x0000000144EAF670
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class TerrainSettings : public Core::DataContainer {
        Uint32 HeightQueryCacheSize; // 0x18
        Uint32 ModifiersCapacity; // 0x1C
        Uint32 IntersectingModifiersMax; // 0x20
        Float32 ModifierSlopeMax; // 0x24
        Float32 ModifierDepthFactor; // 0x28
        Uint32 ModifiersAppliedPerFrameMax; // 0x2C
        Float32 RefiningDuringPrioritizationMinPriority; // 0x30
        Boolean ModifiersEnable; // 0x34
        Boolean PrioritizationOnSeveralFrames; // 0x35
        Boolean RefiningDuringPrioritization; // 0x36
        char pad_0x37[0x1];
    }; // 0x38
    static_assert(sizeof(TerrainSettings) == 0x38);
}
#pragma pack(pop)