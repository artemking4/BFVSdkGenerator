// Object: ServerBipodEntity
// ClassId: 6259
// RuntimeId: 60032
// TypeInfo: 0x0000000144C61CF0
#include "../Casablanca/BipodEntity.h"

namespace Casablanca {
    class ServerBipodEntity : public Casablanca::BipodEntity {
        char pad_0x150[0x80];
    }; // 0x1D0
    static_assert(sizeof(ServerBipodEntity) == 0x1D0);
}