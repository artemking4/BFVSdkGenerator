// Object: BlueprintBundleCollectionEntityData
// ClassId: 2434
// RuntimeId: 21275
// TypeInfo: 0x0000000144E83DC0
#include "../Entity/EntityData.h"
#include "../Entity/StreamRealm.h"
#include "../GameShared/BlueprintBundleCollection.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class BlueprintBundleCollectionEntityData : public Entity::EntityData {
        Entity::StreamRealm StreamRealm; // 0x20
        char pad_0x24[0x4];
        GameShared::BlueprintBundleCollection Collection; // 0x28
        Int32 ActiveIndex; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BlueprintBundleCollectionEntityData) == 0x38);
}
#pragma pack(pop)