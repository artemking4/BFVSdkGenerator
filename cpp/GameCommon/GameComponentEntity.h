// Object: GameComponentEntity
// ClassId: 7888
// RuntimeId: 29881
// TypeInfo: 0x0000000144E4CB90
#include "../Entity/ComponentEntity.h"

namespace GameCommon {
    class GameComponentEntity : public Entity::ComponentEntity {
        char pad_0xE8[0x90];
    }; // 0x178
    static_assert(sizeof(GameComponentEntity) == 0x178);
}