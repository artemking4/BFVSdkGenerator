// Object: ClientBFUISoldierFactionFilterEntity
// ClassId: 6402
// RuntimeId: 17507
// TypeInfo: 0x0000000144CA7130
#include "../Casablanca/ClientBFUIFactionFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUISoldierFactionFilterEntity : public Casablanca::ClientBFUIFactionFilterEntityBase {
        char pad_0x40[0x80];
    }; // 0xC0
    static_assert(sizeof(ClientBFUISoldierFactionFilterEntity) == 0xC0);
}