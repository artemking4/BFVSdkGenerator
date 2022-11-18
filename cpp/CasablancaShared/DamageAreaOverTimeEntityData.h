// Object: DamageAreaOverTimeEntityData
// ClassId: 3353
// RuntimeId: 13268
// TypeInfo: 0x0000000144D5B4E0
#include "../CasablancaShared/DamageAreaOverTimeBaseData.h"
#include "../CasablancaShared/DamageOverTimeData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class DamageAreaOverTimeEntityData : public CasablancaShared::DamageAreaOverTimeBaseData {
        CasablancaShared::DamageOverTimeData DamageOverTime; // 0x70
    }; // 0x90
    static_assert(sizeof(DamageAreaOverTimeEntityData) == 0x90);
}
#pragma pack(pop)