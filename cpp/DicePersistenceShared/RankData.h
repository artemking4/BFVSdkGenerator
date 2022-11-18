// Object: RankData
// ClassId: 4557
// RuntimeId: 58092
// TypeInfo: 0x0000000144DC7980
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class RankData : public Core::DataContainer {
        Int32 RequiredStatValue; // 0x18
        Int32 Index; // 0x1C
    }; // 0x20
    static_assert(sizeof(RankData) == 0x20);
}
#pragma pack(pop)