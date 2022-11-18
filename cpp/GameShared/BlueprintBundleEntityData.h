// Object: BlueprintBundleEntityData
// ClassId: 2435
// RuntimeId: 58193
// TypeInfo: 0x0000000144E83E40
#include "../Entity/EntityData.h"
#include "../Entity/StreamRealm.h"
#include "../GameShared/BlueprintBundleReference.h"

#pragma pack(push, 8)
namespace GameShared {
    class BlueprintBundleEntityData : public Entity::EntityData {
        Entity::StreamRealm StreamRealm; // 0x20
        char pad_0x24[0x4];
        GameShared::BlueprintBundleReference Bundle; // 0x28
    }; // 0x60
    static_assert(sizeof(BlueprintBundleEntityData) == 0x60);
}
#pragma pack(pop)