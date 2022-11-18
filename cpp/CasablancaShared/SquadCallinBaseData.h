// Object: SquadCallinBaseData
// ClassId: 397
// RuntimeId: 40766
// TypeInfo: 0x0000000144D34A00
#include "../CasablancaShared/SquadItemBase.h"
#include "../CasablancaShared/SquadCallinType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinBaseData : public CasablancaShared::SquadItemBase {
        CasablancaShared::SquadCallinType CallinType; // 0x68
        Boolean HaveLaunchPosition; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(SquadCallinBaseData) == 0x70);
}
#pragma pack(pop)