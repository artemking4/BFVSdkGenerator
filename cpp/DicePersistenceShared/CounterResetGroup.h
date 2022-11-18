// Object: CounterResetGroup
// ClassId: 1436
// RuntimeId: 38473
// TypeInfo: 0x0000000144DC7F00
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class CounterResetGroup : public Core::DataContainer {
        Int32 Index; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(CounterResetGroup) == 0x20);
}
#pragma pack(pop)