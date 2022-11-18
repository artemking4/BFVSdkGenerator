// Object: GameComponentEntityData
// ClassId: 3289
// RuntimeId: 27704
// TypeInfo: 0x0000000144ED7470
#include "../Entity/ComponentEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Entity {
    class GameComponentEntityData : public Entity::ComponentEntityData {
        Boolean Enabled; // 0x80
        char pad_0x81[0xF];
    }; // 0x90
    static_assert(sizeof(GameComponentEntityData) == 0x90);
}
#pragma pack(pop)