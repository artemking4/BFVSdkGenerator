// Object: EngineComponentData
// ClassId: 1766
// RuntimeId: 18581
// TypeInfo: 0x0000000144E8DDE0
#include "../Entity/GameComponentData.h"
#include "../GameShared/EngineConfigData.h"
#include "../Global/Int32.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class EngineComponentData : public Entity::GameComponentData {
        Array<GameShared::EngineConfigData> ConfigList; // 0x80
        Int32 UseAlternateConfig; // 0x88
        char pad_0x8C[0x4];
        Audio::SoundAsset SoundEffect; // 0x90
        Audio::SoundAsset SurfaceSoundEffect; // 0x98
        Boolean UseFirstPersonSounds; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(EngineComponentData) == 0xB0);
}
#pragma pack(pop)