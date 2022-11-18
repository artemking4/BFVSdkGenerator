// Object: ArrayDamagePlayerOverTimeEntityData
// ClassId: 2597
// RuntimeId: 42483
// TypeInfo: 0x0000000144D5B5E0
#include "../CasablancaShared/DamagePlayerOverTimeBaseData.h"
#include "../Global/Float32.h"
#include "../CasablancaShared/ArrayDoTData.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ArrayDamagePlayerOverTimeEntityData : public CasablancaShared::DamagePlayerOverTimeBaseData {
        Float32 DoTDuration; // 0x80
        Float32 DoTTickDuration; // 0x84
        Array<CasablancaShared::ArrayDoTData> ArrayDoT; // 0x88
    }; // 0x90
    static_assert(sizeof(ArrayDamagePlayerOverTimeEntityData) == 0x90);
}
#pragma pack(pop)