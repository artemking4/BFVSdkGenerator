// Object: BlueprintBundleStatusEntityData
// ClassId: 2436
// RuntimeId: 4606
// TypeInfo: 0x0000000144E83D40
#include "../Entity/EntityData.h"
#include "../Entity/StreamRealm.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class BlueprintBundleStatusEntityData : public Entity::EntityData {
        Entity::StreamRealm StreamRealm; // 0x20
        char pad_0x24[0x4];
        CString BundleName; // 0x28
    }; // 0x30
    static_assert(sizeof(BlueprintBundleStatusEntityData) == 0x30);
}
#pragma pack(pop)