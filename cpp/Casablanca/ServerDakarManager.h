// Object: ServerDakarManager
// ClassId: 7105
// RuntimeId: 49117
// TypeInfo: 0x0000000144C3A4A0
#include "../Casablanca/DakarManager.h"

namespace Casablanca {
    class ServerDakarManager : public Casablanca::DakarManager {
        char pad_0x68[0x300];
    }; // 0x368
    static_assert(sizeof(ServerDakarManager) == 0x368);
}