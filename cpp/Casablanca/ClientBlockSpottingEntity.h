// Object: ClientBlockSpottingEntity
// ClassId: 7843
// RuntimeId: 62121
// TypeInfo: 0x0000000144C90750
#include "../Casablanca/BlockSpottingEntity.h"

namespace Casablanca {
    class ClientBlockSpottingEntity : public Casablanca::BlockSpottingEntity {
        char pad_0xD0[0x20];
    }; // 0xF0
    static_assert(sizeof(ClientBlockSpottingEntity) == 0xF0);
}