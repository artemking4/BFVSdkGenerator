// Object: ClientDiceGameplayFeatureComponent
// ClassId: 5816
// RuntimeId: 11996
// TypeInfo: 0x0000000144EEE780
#include "../GameClient/ClientGameComponent.h"

namespace MotionMachine {
    class ClientDiceGameplayFeatureComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xF8];
    }; // 0x130
    static_assert(sizeof(ClientDiceGameplayFeatureComponent) == 0x130);
}