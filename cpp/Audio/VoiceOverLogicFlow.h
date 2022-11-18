// Object: VoiceOverLogicFlow
// ClassId: 5594
// RuntimeId: 10888
// TypeInfo: 0x0000000144E1ADC0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/VoiceOverLogicAsset.h"
#include "../Audio/VoiceOverGroup.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverEventNode.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLogicFlow : public Core::DataContainer {
        CString Name; // 0x18
        Audio::VoiceOverLogicAsset Owner; // 0x20
        Audio::VoiceOverGroup Group; // 0x28
        Array<Audio::VoiceOverValue> Locals; // 0x30
        Array<Audio::VoiceOverEventNode> Roots; // 0x38
        Boolean IgnoreFlow; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(VoiceOverLogicFlow) == 0x48);
}
#pragma pack(pop)