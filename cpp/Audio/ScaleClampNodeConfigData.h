// Object: ScaleClampNodeConfigData
// ClassId: 940
// RuntimeId: 51426
// TypeInfo: 0x0000000144E18840
#include "../Audio/AudioGraphNodeConfigData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class ScaleClampNodeConfigData : public Audio::AudioGraphNodeConfigData {
        Float32 InMin; // 0x28
        Float32 InMax; // 0x2C
        Float32 OutMin; // 0x30
        Float32 OutMax; // 0x34
    }; // 0x38
    static_assert(sizeof(ScaleClampNodeConfigData) == 0x38);
}
#pragma pack(pop)