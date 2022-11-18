// Object: DebugValueInput
// ClassId: 1127
// RuntimeId: 3894
// TypeInfo: 0x0000000144E1A440
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/CString.h"
#include "../Audio/DebugRenderType.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Audio {
    class DebugValueInput : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort V; // 0x18
        CString Name; // 0x20
        Audio::DebugRenderType RenderType; // 0x28
        Float32 Min; // 0x2C
        Float32 Max; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(DebugValueInput) == 0x38);
}
#pragma pack(pop)