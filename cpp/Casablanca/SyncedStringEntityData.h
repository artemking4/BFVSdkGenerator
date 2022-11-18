// Object: SyncedStringEntityData
// ClassId: 3542
// RuntimeId: 48120
// TypeInfo: 0x0000000144C31870
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SyncedStringEntityData : public Entity::EntityData {
        CString In; // 0x20
    }; // 0x28
    static_assert(sizeof(SyncedStringEntityData) == 0x28);
}
#pragma pack(pop)