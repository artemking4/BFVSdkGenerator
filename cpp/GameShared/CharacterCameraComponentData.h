// Object: CharacterCameraComponentData
// ClassId: 1735
// RuntimeId: 51674
// TypeInfo: 0x0000000144E83340
#include "../Entity/GameComponentData.h"
#include "../GameShared/TargetCameraData.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterCameraComponentData : public Entity::GameComponentData {
        Array<GameShared::TargetCameraData> Cameras; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(CharacterCameraComponentData) == 0x90);
}
#pragma pack(pop)