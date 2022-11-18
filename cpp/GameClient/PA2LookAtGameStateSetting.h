// Object: PA2LookAtGameStateSetting
// ClassId: 4402
// RuntimeId: 19218
// TypeInfo: 0x0000000144E45040
#include "../Core/DataContainer.h"
#include "../Ant/AntRef.h"

namespace GameClient {
    class PA2LookAtGameStateSetting : public Core::DataContainer {
        Ant::AntRef GameState; // 0x18
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(PA2LookAtGameStateSetting) == 0x30);
}