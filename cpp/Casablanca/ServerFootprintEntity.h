// Object: ServerFootprintEntity
// ClassId: 7838
// RuntimeId: 38072
// TypeInfo: 0x0000000144C40470
#include "../GameCommon/AbstractDynamicDestructionDepthEntity.h"

namespace Casablanca {
    class ServerFootprintEntity : public GameCommon::AbstractDynamicDestructionDepthEntity {
        char pad_0x48[0x138];
    }; // 0x180
    static_assert(sizeof(ServerFootprintEntity) == 0x180);
}