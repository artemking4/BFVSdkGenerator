// Object: VoiceOverGlobalConstantValue
// ClassId: 5586
// RuntimeId: 22338
// TypeInfo: 0x0000000144E1C340
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/VoiceOverConstantValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverGlobalConstantValue : public Core::DataContainer {
        CString Name; // 0x18
        Audio::VoiceOverConstantValue Source; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverGlobalConstantValue) == 0x28);
}
#pragma pack(pop)