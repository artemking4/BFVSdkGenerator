// Object: ConditionalRimeLayoutEntityData
// ClassId: 3116
// RuntimeId: 22770
// TypeInfo: 0x0000000144F2BA10
#include "../RimeElementsShared/RimeConditionalStateEntityData.h"
#include "../RimeElementsShared/RimeAxisLayoutData.h"

namespace RimeElementsShared {
    class ConditionalRimeLayoutEntityData : public RimeElementsShared::RimeConditionalStateEntityData {
        RimeElementsShared::RimeAxisLayoutData ValueIfTrue; // 0x28
        RimeElementsShared::RimeAxisLayoutData ValueIfFalse; // 0x40
    }; // 0x58
    static_assert(sizeof(ConditionalRimeLayoutEntityData) == 0x58);
}