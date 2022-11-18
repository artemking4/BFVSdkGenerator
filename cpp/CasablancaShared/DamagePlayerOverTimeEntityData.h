// Object: DamagePlayerOverTimeEntityData
// ClassId: 2598
// RuntimeId: 34232
// TypeInfo: 0x0000000144D5B660
#include "../CasablancaShared/DamagePlayerOverTimeBaseData.h"
#include "../CasablancaShared/DamageOverTimeData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DamagePlayerOverTimeEntityData : public CasablancaShared::DamagePlayerOverTimeBaseData {
        CasablancaShared::DamageOverTimeData DamageOverTime; // 0x80
    }; // 0xA0
    static_assert(sizeof(DamagePlayerOverTimeEntityData) == 0xA0);
}
#pragma pack(pop)