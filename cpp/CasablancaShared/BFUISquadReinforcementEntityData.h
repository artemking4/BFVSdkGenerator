// Object: BFUISquadReinforcementEntityData
// ClassId: 2406
// RuntimeId: 18638
// TypeInfo: 0x0000000144D1F6F0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUISquadReinforcementEntityData : public Entity::EntityData {
        Core::Vec2 ScreenTargetPosition; // 0x20
        char pad_0x28[0x8];
        Core::LinearTransform CameraTransform; // 0x30
    }; // 0x70
    static_assert(sizeof(BFUISquadReinforcementEntityData) == 0x70);
}
#pragma pack(pop)