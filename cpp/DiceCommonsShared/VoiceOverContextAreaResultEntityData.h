// Object: VoiceOverContextAreaResultEntityData
// ClassId: 3885
// RuntimeId: 36498
// TypeInfo: 0x0000000144DC1E80
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceCommonsShared {
    class VoiceOverContextAreaResultEntityData : public Entity::EntityData {
        Core::Vec3 Position; // 0x20
    }; // 0x30
    static_assert(sizeof(VoiceOverContextAreaResultEntityData) == 0x30);
}
#pragma pack(pop)