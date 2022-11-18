// Object: VoiceOverEventNode
// ClassId: 5614
// RuntimeId: 14047
// TypeInfo: 0x0000000144E1B140
#include "../Audio/VoiceOverStructureNode.h"
#include "../Audio/VoiceOverIntervalNode.h"
#include "../Audio/VoiceOverValueRedirect.h"
#include "../Audio/VoiceOverEvent.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Audio {
    class VoiceOverEventNode : public Audio::VoiceOverStructureNode {
        Array<Audio::VoiceOverIntervalNode> Intervals; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 DebugColor; // 0x30
        Array<Audio::VoiceOverStructureNode> Relationship; // 0x40
        Array<Audio::VoiceOverValueRedirect> Redirects; // 0x48
        Audio::VoiceOverEvent Event; // 0x50
        Float32 DebugIntervalTime; // 0x58
        Boolean DebugEnabled; // 0x5C
        char pad_0x5D[0x3];
    }; // 0x60
    static_assert(sizeof(VoiceOverEventNode) == 0x60);
}
#pragma pack(pop)