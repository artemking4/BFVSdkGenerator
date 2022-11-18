// Object: VoiceOverEvent
// ClassId: 5585
// RuntimeId: 55786
// TypeInfo: 0x0000000144E1CAC0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Audio/VoiceOverNamedValue.h"
#include "../Audio/VoiceOverLogicAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverEvent : public Core::DataContainer {
        CString Name; // 0x18
        Uint32 NameHash; // 0x20
        char pad_0x24[0x4];
        Array<Audio::VoiceOverNamedValue> Parameters; // 0x28
        Audio::VoiceOverLogicAsset Owner; // 0x30
    }; // 0x38
    static_assert(sizeof(VoiceOverEvent) == 0x38);
}
#pragma pack(pop)