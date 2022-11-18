// Object: ParameterRouterEntry
// ClassId: 1158
// RuntimeId: 61592
// TypeInfo: 0x0000000144E17F40
#include "../Audio/AudioGraphNodePortGroup.h"
#include "../Audio/AudioGraphNodePort.h"

#pragma pack(push, 8)
namespace Audio {
    class ParameterRouterEntry : public Audio::AudioGraphNodePortGroup {
        Audio::AudioGraphNodePort In; // 0x18
        Audio::AudioGraphNodePort Out; // 0x20
    }; // 0x28
    static_assert(sizeof(ParameterRouterEntry) == 0x28);
}
#pragma pack(pop)