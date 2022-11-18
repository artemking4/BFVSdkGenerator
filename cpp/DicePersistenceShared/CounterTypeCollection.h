// Object: CounterTypeCollection
// ClassId: 228
// RuntimeId: 11778
// TypeInfo: 0x0000000144DC7F80
#include "../Core/Asset.h"
#include "../DicePersistenceShared/CounterType.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class CounterTypeCollection : public Core::Asset {
        Array<DicePersistenceShared::CounterType> CounterTypes; // 0x20
    }; // 0x28
    static_assert(sizeof(CounterTypeCollection) == 0x28);
}
#pragma pack(pop)