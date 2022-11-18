// Object: WeaponInputRouterComponentData
// ClassId: 1922
// RuntimeId: 2920
// TypeInfo: 0x0000000144F79FE0
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class WeaponInputRouterComponentData : public Entity::GameComponentData {
        Float32 MaxFireRate; // 0x80
        Uint32 RotationCount; // 0x84
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(WeaponInputRouterComponentData) == 0x90);
}
#pragma pack(pop)