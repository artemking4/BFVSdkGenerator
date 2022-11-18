// Object: PersistenceActivationRuleCollection
// ClassId: 620
// RuntimeId: 14181
// TypeInfo: 0x0000000144DC8500
#include "../Core/Asset.h"
#include "../DicePersistenceShared/PersistenceActivationRule.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class PersistenceActivationRuleCollection : public Core::Asset {
        Array<DicePersistenceShared::PersistenceActivationRule> Rules; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceActivationRuleCollection) == 0x28);
}
#pragma pack(pop)