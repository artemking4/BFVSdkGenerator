// Object: CounterType
// ClassId: 1437
// RuntimeId: 3442
// TypeInfo: 0x0000000144DC8000
#include "../Core/DataContainer.h"
#include "../DicePersistenceShared/CounterCommitType.h"
#include "../DicePersistenceShared/CounterResetGroup.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class CounterType : public Core::DataContainer {
        DicePersistenceShared::CounterCommitType CounterCommitType; // 0x18
        char pad_0x1C[0x4];
        Array<DicePersistenceShared::CounterResetGroup> ResetGroups; // 0x20
    }; // 0x28
    static_assert(sizeof(CounterType) == 0x28);
}
#pragma pack(pop)