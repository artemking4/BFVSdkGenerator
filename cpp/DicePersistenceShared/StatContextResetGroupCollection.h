// Object: StatContextResetGroupCollection
// ClassId: 762
// RuntimeId: 11985
// TypeInfo: 0x0000000144DC8180
#include "../Core/Asset.h"
#include "../DicePersistenceShared/StatContextResetGroup.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatContextResetGroupCollection : public Core::Asset {
        Array<DicePersistenceShared::StatContextResetGroup> Groups; // 0x20
    }; // 0x28
    static_assert(sizeof(StatContextResetGroupCollection) == 0x28);
}
#pragma pack(pop)