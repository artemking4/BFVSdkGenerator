// Object: ClientDakarManager
// ClassId: 7104
// RuntimeId: 25523
// TypeInfo: 0x0000000144C88C50
#include "../Casablanca/DakarManager.h"

namespace Casablanca {
    class ClientDakarManager : public Casablanca::DakarManager {
        char pad_0x68[0xB0];
    }; // 0x118
    static_assert(sizeof(ClientDakarManager) == 0x118);
}