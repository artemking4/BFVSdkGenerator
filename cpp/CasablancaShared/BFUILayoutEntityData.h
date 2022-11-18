// Object: BFUILayoutEntityData
// ClassId: 2289
// RuntimeId: 6761
// TypeInfo: 0x0000000144D97E10
#include "../Entity/EntityData.h"
#include "../Core/Vec2.h"

namespace CasablancaShared {
    class BFUILayoutEntityData : public Entity::EntityData {
        Core::Vec2 ElementOffsetScaling; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUILayoutEntityData) == 0x28);
}