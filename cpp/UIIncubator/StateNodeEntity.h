// Object: StateNodeEntity
// ClassId: 8071
// RuntimeId: 34699
// TypeInfo: 0x0000000144F6A230
#include "../UIIncubator/StateNodeEntityBase.h"

namespace UIIncubator {
    class StateNodeEntity : public UIIncubator::StateNodeEntityBase {
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(StateNodeEntity) == 0x90);
}