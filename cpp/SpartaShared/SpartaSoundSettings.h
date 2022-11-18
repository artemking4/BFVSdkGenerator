// Object: SpartaSoundSettings
// ClassId: 5027
// RuntimeId: 11461
// TypeInfo: 0x0000000144F4F840
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaSoundSettings : public Core::SystemSettings {
        CString SpartaAudioEffectsAssetPath; // 0x20
    }; // 0x28
    static_assert(sizeof(SpartaSoundSettings) == 0x28);
}
#pragma pack(pop)