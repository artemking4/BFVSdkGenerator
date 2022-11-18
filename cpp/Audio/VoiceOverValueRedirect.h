// Object: VoiceOverValueRedirect
// ClassId: 5642
// RuntimeId: 60262
// TypeInfo: 0x0000000144E1C940
#include "../Core/DataContainer.h"
#include "../Audio/VoiceOverValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverValueRedirect : public Core::DataContainer {
        Audio::VoiceOverValue Source; // 0x18
        Audio::VoiceOverValue Target; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverValueRedirect) == 0x28);
}
#pragma pack(pop)