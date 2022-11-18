// Object: WarningSystemComponentData
// ClassId: 1917
// RuntimeId: 21523
// TypeInfo: 0x0000000144E9AA90
#include "../Entity/GameComponentData.h"
#include "../Audio/SoundAsset.h"
#include "../GameShared/WarningPlayerType.h"

#pragma pack(push, 16)
namespace GameShared {
    class WarningSystemComponentData : public Entity::GameComponentData {
        Audio::SoundAsset AimWarnSoundEffect; // 0x80
        Audio::SoundAsset MissileWarnSoundEffect; // 0x88
        Audio::SoundAsset LowHealthWarnSoundEffect; // 0x90
        Audio::SoundAsset LockingWarnSoundEffect; // 0x98
        Audio::SoundAsset LockedWarnSoundEffect; // 0xA0
        GameShared::WarningPlayerType PlayerType; // 0xA8
        char pad_0xAC[0x4];
    }; // 0xB0
    static_assert(sizeof(WarningSystemComponentData) == 0xB0);
}
#pragma pack(pop)