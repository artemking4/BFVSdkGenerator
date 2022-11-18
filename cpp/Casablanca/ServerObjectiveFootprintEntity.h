// Object: ServerObjectiveFootprintEntity
// ClassId: 7839
// RuntimeId: 57542
// TypeInfo: 0x0000000144C3FBF0
#include "../Casablanca/ServerFootprintEntity.h"

namespace Casablanca {
    class ServerObjectiveFootprintEntity : public Casablanca::ServerFootprintEntity {
        char pad_0x180[0x10];
    }; // 0x190
    static_assert(sizeof(ServerObjectiveFootprintEntity) == 0x190);
}