// Object: ClientBipodEntity
// ClassId: 6258
// RuntimeId: 53550
// TypeInfo: 0x0000000144C9F110
#include "../Casablanca/BipodEntity.h"

namespace Casablanca {
    class ClientBipodEntity : public Casablanca::BipodEntity {
        char pad_0x150[0x78];
    }; // 0x1C8
    static_assert(sizeof(ClientBipodEntity) == 0x1C8);
}