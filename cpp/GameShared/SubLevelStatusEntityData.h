// Object: SubLevelStatusEntityData
// ClassId: 3531
// RuntimeId: 60198
// TypeInfo: 0x0000000144E903E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class SubLevelStatusEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString SubLevelName; // 0x28
    }; // 0x30
    static_assert(sizeof(SubLevelStatusEntityData) == 0x30);
}
#pragma pack(pop)