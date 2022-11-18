// Object: YawOnlyCameraTransformerEntityData
// ClassId: 3928
// RuntimeId: 26987
// TypeInfo: 0x0000000144DEE920
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class YawOnlyCameraTransformerEntityData : public Entity::EntityData {
        Core::LinearTransform InTransform; // 0x20
    }; // 0x60
    static_assert(sizeof(YawOnlyCameraTransformerEntityData) == 0x60);
}
#pragma pack(pop)