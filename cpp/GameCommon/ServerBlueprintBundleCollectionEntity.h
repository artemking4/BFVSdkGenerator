// Object: ServerBlueprintBundleCollectionEntity
// ClassId: 6262
// RuntimeId: 10185
// TypeInfo: 0x0000000144E4CFD0
#include "../GameCommon/BlueprintBundleCollectionEntityBase.h"

namespace GameCommon {
    class ServerBlueprintBundleCollectionEntity : public GameCommon::BlueprintBundleCollectionEntityBase {
        char pad_0x80[0x28];
    }; // 0xA8
    static_assert(sizeof(ServerBlueprintBundleCollectionEntity) == 0xA8);
}