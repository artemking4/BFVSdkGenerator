// Object: ClientBFUIFactionFilterEntityBase
// ClassId: 6401
// RuntimeId: 58098
// TypeInfo: 0x0000000144CAA300
#include "../Casablanca/ClientBFUIFilterEntityBase.h"

namespace Casablanca {
    class ClientBFUIFactionFilterEntityBase : public Casablanca::ClientBFUIFilterEntityBase {
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(ClientBFUIFactionFilterEntityBase) == 0x40);
}