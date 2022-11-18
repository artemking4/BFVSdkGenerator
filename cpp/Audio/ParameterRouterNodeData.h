// Object: ParameterRouterNodeData
// ClassId: 1073
// RuntimeId: 17691
// TypeInfo: 0x0000000144E17EC0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/ParameterRouterEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class ParameterRouterNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort RouteIn; // 0x18
        Audio::AudioGraphNodePort RouteOut; // 0x20
        Audio::AudioGraphNodePort DefaultOut; // 0x28
        Array<Audio::ParameterRouterEntry> ParameterRouterEntries; // 0x30
    }; // 0x38
    static_assert(sizeof(ParameterRouterNodeData) == 0x38);
}
#pragma pack(pop)