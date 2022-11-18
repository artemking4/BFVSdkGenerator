// Object: VoiceOverStructureConnection
// ClassId: 5637
// RuntimeId: 51416
// TypeInfo: 0x0000000144E1C640
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverStructureNode.h"
#include "../Audio/VoiceOverRelationshipInput.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverStructureConnection : public Core::DataContainer {
        Audio::VoiceOverStructureNode TargetNode; // 0x18
        Audio::VoiceOverRelationshipInput TargetInput; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverStructureConnection) == 0x28);
}
#pragma pack(pop)