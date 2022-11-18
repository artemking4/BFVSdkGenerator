// Object: FairFightServerSettings
// ClassId: 4985
// RuntimeId: 23099
// TypeInfo: 0x0000000144EE82F0
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace FairFight {
    class FairFightServerSettings : public Core::SystemSettings {
        Boolean Enabled; // 0x20
        Boolean KillSwitched; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(FairFightServerSettings) == 0x28);
}
#pragma pack(pop)