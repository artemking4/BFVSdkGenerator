// Object: PersistenceStatGroup
// ClassId: 4416
// RuntimeId: 2482
// TypeInfo: 0x0000000144E75840
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class PersistenceStatGroup : public Core::DataContainer {
        CString GroupName; // 0x18
    }; // 0x20
    static_assert(sizeof(PersistenceStatGroup) == 0x20);
}
#pragma pack(pop)