// Object: CounterResetGroupCollection
// ClassId: 227
// RuntimeId: 18644
// TypeInfo: 0x0000000144DC7E80
#include "../Core/Asset.h"
#include "../DicePersistenceShared/CounterResetGroup.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class CounterResetGroupCollection : public Core::Asset {
        Array<DicePersistenceShared::CounterResetGroup> CounterResetGroups; // 0x20
    }; // 0x28
    static_assert(sizeof(CounterResetGroupCollection) == 0x28);
}
#pragma pack(pop)