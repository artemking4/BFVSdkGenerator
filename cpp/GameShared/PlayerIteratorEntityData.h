// Object: PlayerIteratorEntityData
// ClassId: 3027
// RuntimeId: 42716
// TypeInfo: 0x0000000144E764C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"
#include "../GameShared/PlayerTypeEnum.h"

#pragma pack(push, 8)
namespace GameShared {
    class PlayerIteratorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        GameShared::TeamId Team; // 0x24
        GameShared::PlayerTypeEnum PlayerType; // 0x28
        Boolean Alive; // 0x2C
        Boolean RandomizeFromStart; // 0x2D
        char pad_0x2E[0x2];
    }; // 0x30
    static_assert(sizeof(PlayerIteratorEntityData) == 0x30);
}
#pragma pack(pop)