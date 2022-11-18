// Object: ClientBlueprintBundleCollectionEntity
// ClassId: 6261
// RuntimeId: 905
// TypeInfo: 0x0000000144E4D0E0
#include "../GameCommon/BlueprintBundleCollectionEntityBase.h"

namespace GameCommon {
    class ClientBlueprintBundleCollectionEntity : public GameCommon::BlueprintBundleCollectionEntityBase {
        char pad_0x80[0x20];
    }; // 0xA0
    static_assert(sizeof(ClientBlueprintBundleCollectionEntity) == 0xA0);
}