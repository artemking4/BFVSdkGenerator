// Object: OctaneSwitcherNodeData
// ClassId: 1060
// RuntimeId: 43073
// TypeInfo: 0x0000000144EFD3D0
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../OctaneShared/OctaneAsset.h"

#pragma pack(push, 8)
namespace OctaneShared {
    class OctaneSwitcherNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Index; // 0x18
        Audio::AudioGraphNodePort Asset; // 0x20
        Audio::AudioGraphNodePort IndexChanged; // 0x28
        Array<OctaneShared::OctaneAsset> Assets; // 0x30
    }; // 0x38
    static_assert(sizeof(OctaneSwitcherNodeData) == 0x38);
}
#pragma pack(pop)