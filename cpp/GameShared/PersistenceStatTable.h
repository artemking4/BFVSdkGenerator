// Object: PersistenceStatTable
// ClassId: 4417
// RuntimeId: 26649
// TypeInfo: 0x0000000144E758C0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../GameShared/AbstractPersistenceData.h"

#pragma pack(push, 8)
namespace GameShared {
    class PersistenceStatTable : public Core::DataContainer {
        CString TableName; // 0x18
        GameShared::AbstractPersistenceData OwnerPersistenceData; // 0x20
    }; // 0x28
    static_assert(sizeof(PersistenceStatTable) == 0x28);
}
#pragma pack(pop)