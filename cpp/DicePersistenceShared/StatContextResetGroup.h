// Object: StatContextResetGroup
// ClassId: 4914
// RuntimeId: 25033
// TypeInfo: 0x0000000144DC8200
#include "../Core/DataContainer.h"
#include "../Global/Int32.h"
#include "../DicePersistenceShared/StatContextType.h"
#include "../DicePersistenceShared/StatContextResetGroupEntry.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatContextResetGroup : public Core::DataContainer {
        Int32 GroupId; // 0x18
        DicePersistenceShared::StatContextType ContextType; // 0x1C
        Array<DicePersistenceShared::StatContextResetGroupEntry> Entries; // 0x20
    }; // 0x28
    static_assert(sizeof(StatContextResetGroup) == 0x28);
}
#pragma pack(pop)