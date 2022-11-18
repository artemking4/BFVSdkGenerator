// Object: RouteNodeData
// ClassId: 1085
// RuntimeId: 46378
// TypeInfo: 0x0000000144E02770
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Audio/RouteEntry.h"

#pragma pack(push, 8)
namespace Audio {
    class RouteNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort In; // 0x18
        Array<Audio::RouteEntry> Routes; // 0x20
    }; // 0x28
    static_assert(sizeof(RouteNodeData) == 0x28);
}
#pragma pack(pop)