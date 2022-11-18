// Object: ShadowplaySettings
// ClassId: 5022
// RuntimeId: 50478
// TypeInfo: 0x0000000144DBEC30
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class ShadowplaySettings : public Core::SystemSettings {
        Boolean Enable; // 0x20
        Boolean DisplaySummary; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(ShadowplaySettings) == 0x28);
}
#pragma pack(pop)