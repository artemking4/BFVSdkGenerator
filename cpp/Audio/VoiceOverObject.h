// Object: VoiceOverObject
// ClassId: 5641
// RuntimeId: 21686
// TypeInfo: 0x0000000144E1CB40
#include "../Audio/VoiceOverNamedValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverObject : public Audio::VoiceOverNamedValue {
        Array<Audio::VoiceOverNamedValue> Properties; // 0x28
    }; // 0x30
    static_assert(sizeof(VoiceOverObject) == 0x30);
}
#pragma pack(pop)