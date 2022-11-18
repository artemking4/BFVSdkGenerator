// Object: EntityLinkData
// ClassId: 1558
// RuntimeId: 52278
// TypeInfo: 0x0000000144DBAD00
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class EntityLinkData : public Core::DataContainer {
        CString LinkName; // 0x18
    }; // 0x20
    static_assert(sizeof(EntityLinkData) == 0x20);
}
#pragma pack(pop)