// Object: HealthStateSpecificModifierUnlock
// ClassId: 1432
// RuntimeId: 45621
// TypeInfo: 0x0000000144D40B50
#include "../CasablancaShared/ContextSpecificModifierUnlock.h"
#include "../CasablancaShared/HealthStateType.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class HealthStateSpecificModifierUnlock : public CasablancaShared::ContextSpecificModifierUnlock {
        CasablancaShared::HealthStateType HealthState; // 0x28
        Float32 MinHealth; // 0x2C
        Float32 MaxHealth; // 0x30
        Boolean CheckHealth; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(HealthStateSpecificModifierUnlock) == 0x38);
}
#pragma pack(pop)