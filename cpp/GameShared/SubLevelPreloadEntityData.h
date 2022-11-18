// Object: SubLevelPreloadEntityData
// ClassId: 3530
// RuntimeId: 11195
// TypeInfo: 0x0000000144E90460
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class SubLevelPreloadEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CString> SubLevelsToPreload; // 0x28
    }; // 0x30
    static_assert(sizeof(SubLevelPreloadEntityData) == 0x30);
}
#pragma pack(pop)