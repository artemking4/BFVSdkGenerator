// Object: PersistenceActivationConditionCollection
// ClassId: 619
// RuntimeId: 8346
// TypeInfo: 0x0000000144DC8580
#include "../Core/Asset.h"
#include "../DicePersistenceShared/PersistenceActivationCondition.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceActivationConditionCollection : public Core::Asset {
        Array<DicePersistenceShared::PersistenceActivationCondition> Condition; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceActivationConditionCollection) == 0x28);
}
#pragma pack(pop)