// Object: BFUILinkableStateNodeEntity
// ClassId: 8070
// RuntimeId: 26027
// TypeInfo: 0x0000000144CB07D0
#include "../UIIncubator/StateNodeEntityBase.h"

namespace Casablanca {
    class BFUILinkableStateNodeEntity : public UIIncubator::StateNodeEntityBase {
        char pad_0x88[0x58];
    }; // 0xE0
    static_assert(sizeof(BFUILinkableStateNodeEntity) == 0xE0);
}