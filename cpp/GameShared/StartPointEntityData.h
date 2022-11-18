// Object: StartPointEntityData
// ClassId: 3513
// RuntimeId: 11536
// TypeInfo: 0x0000000144E77140
#include "../Entity/EntityData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class StartPointEntityData : public Entity::EntityData {
        CString StartName; // 0x20
    }; // 0x28
    static_assert(sizeof(StartPointEntityData) == 0x28);
}
#pragma pack(pop)