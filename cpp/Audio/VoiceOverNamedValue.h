// Object: VoiceOverNamedValue
// ClassId: 5640
// RuntimeId: 7207
// TypeInfo: 0x0000000144E1CBC0
#include "../Audio/VoiceOverValue.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Audio/VoiceOverValueType.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverNamedValue : public Audio::VoiceOverValue {
        CString Name; // 0x18
        Uint32 NameHash; // 0x20
        Audio::VoiceOverValueType ValueType; // 0x24
    }; // 0x28
    static_assert(sizeof(VoiceOverNamedValue) == 0x28);
}
#pragma pack(pop)