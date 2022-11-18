// Object: ClientSoundAssetDataEntity
// ClassId: 6866
// RuntimeId: 60883
// TypeInfo: 0x0000000144DAC110
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientSoundAssetDataEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientSoundAssetDataEntity) == 0x78);
}