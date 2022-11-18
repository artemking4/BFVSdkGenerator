// Object: ServerBlueprintBundleEntity
// ClassId: 6265
// RuntimeId: 27061
// TypeInfo: 0x0000000144E4CDB0
#include "../GameCommon/BlueprintBundleEntityBase.h"

namespace GameCommon {
    class ServerBlueprintBundleEntity : public GameCommon::BlueprintBundleEntityBase {
        char pad_0x78[0x28];
    }; // 0xA0
    static_assert(sizeof(ServerBlueprintBundleEntity) == 0xA0);
}