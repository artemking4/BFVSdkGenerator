// Object: VoiceOverDebugValueNodeConfigData
// ClassId: 5623
// RuntimeId: 62564
// TypeInfo: 0x0000000144E1BEC0
#include "../Audio/VoiceOverNodeConfigData.h"
#include "../Global/CString.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Audio {
    class VoiceOverDebugValueNodeConfigData : public Audio::VoiceOverNodeConfigData {
        CString Name; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 Color; // 0x30
        Float32 DisplayTime; // 0x40
        Boolean Enabled; // 0x44
        char pad_0x45[0xB];
    }; // 0x50
    static_assert(sizeof(VoiceOverDebugValueNodeConfigData) == 0x50);
}
#pragma pack(pop)