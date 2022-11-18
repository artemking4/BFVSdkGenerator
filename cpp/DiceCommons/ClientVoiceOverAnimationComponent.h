// Object: ClientVoiceOverAnimationComponent
// ClassId: 5911
// RuntimeId: 7410
// TypeInfo: 0x0000000144DAB8A0
#include "../GameClient/ClientGameComponent.h"

namespace DiceCommons {
    class ClientVoiceOverAnimationComponent : public GameClient::ClientGameComponent {
        char pad_0x38[0xA0];
    }; // 0xD8
    static_assert(sizeof(ClientVoiceOverAnimationComponent) == 0xD8);
}