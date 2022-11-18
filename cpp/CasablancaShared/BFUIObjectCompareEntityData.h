// Object: BFUIObjectCompareEntityData
// ClassId: 2304
// RuntimeId: 18850
// TypeInfo: 0x0000000144D81420
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

namespace CasablancaShared {
    class BFUIObjectCompareEntityData : public Entity::EntityData {
        Boolean TriggerOnPropertyChange; // 0x20
        Boolean TriggerOnStart; // 0x21
        Boolean AlwaysSend; // 0x22
        char pad_0x23[0x5];
    }; // 0x28
    static_assert(sizeof(BFUIObjectCompareEntityData) == 0x28);
}