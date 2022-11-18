// Object: RaycastNodeData
// ClassId: 1082
// RuntimeId: 62189
// TypeInfo: 0x0000000144DC3880
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class RaycastNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Send; // 0x18
        Audio::AudioGraphNodePort Hit; // 0x20
        Audio::AudioGraphNodePort Miss; // 0x28
        Float32 Left; // 0x30
        Float32 Up; // 0x34
        Float32 Forward; // 0x38
        Audio::AudioGraphNodePort MaterialId; // 0x3C
        Boolean SeeThrough; // 0x44
        Boolean Penetrable; // 0x45
        Boolean IncludeTerrain; // 0x46
        Boolean IncludeWater; // 0x47
        Boolean IncludeCharacters; // 0x48
        Boolean IncludeVehicles; // 0x49
        Boolean IncludeRagdolls; // 0x4A
        Boolean IncludeFixed; // 0x4B
        Boolean IncludeKeyframed; // 0x4C
        Boolean IncludeDynamic; // 0x4D
        Boolean DetailedQueryMode; // 0x4E
        Boolean EnableDebug; // 0x4F
    }; // 0x50
    static_assert(sizeof(RaycastNodeData) == 0x50);
}
#pragma pack(pop)