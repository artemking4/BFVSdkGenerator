// Object: ClientBlueprintBundleEntity
// ClassId: 6264
// RuntimeId: 53434
// TypeInfo: 0x0000000144E4CEC0
#include "../GameCommon/BlueprintBundleEntityBase.h"

namespace GameCommon {
    class ClientBlueprintBundleEntity : public GameCommon::BlueprintBundleEntityBase {
        char pad_0x78[0x20];
    }; // 0x98
    static_assert(sizeof(ClientBlueprintBundleEntity) == 0x98);
}