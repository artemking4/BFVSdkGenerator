// Object: ClientVec3ToServerData
// ClassId: 2511
// RuntimeId: 58609
// TypeInfo: 0x0000000144DEE5A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ClientVec3ToServerData : public Entity::EntityData {
        Float32 FrustumFov; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform FrustumOffset; // 0x30
        Boolean FrustumCheckEnable; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(ClientVec3ToServerData) == 0x80);
}
#pragma pack(pop)