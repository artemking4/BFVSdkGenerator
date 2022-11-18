// Object: DiceJobSchedulerSettings
// ClassId: 4978
// RuntimeId: 39082
// TypeInfo: 0x0000000144DA6D20
#include "../Core/SystemSettings.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommons {
    class DiceJobSchedulerSettings : public Core::SystemSettings {
        CString ConfigFileName; // 0x20
    }; // 0x28
    static_assert(sizeof(DiceJobSchedulerSettings) == 0x28);
}
#pragma pack(pop)