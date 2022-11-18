// Object: BFUISelectableBoostObjectAttributes
// ClassId: 4112
// RuntimeId: 35120
// TypeInfo: 0x0000000144D306A0
#include "../CasablancaShared/Identifiable.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/SphereOfInfluence.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectableBoostObjectAttributes : public CasablancaShared::Identifiable {
        Int32 Handle; // 0x18
        Float32 IncreaseValue; // 0x1C
        Int32 AvailableCount; // 0x20
        CasablancaShared::SphereOfInfluence SOI; // 0x24
        Float32 SOI_IncreaseValue; // 0x28
        Int32 SecondsLeft; // 0x2C
        Boolean CurrentlyActive; // 0x30
        Boolean CanBeActivated; // 0x31
        Boolean CanBePaused; // 0x32
        char pad_0x33[0x5];
    }; // 0x38
    static_assert(sizeof(BFUISelectableBoostObjectAttributes) == 0x38);
}
#pragma pack(pop)