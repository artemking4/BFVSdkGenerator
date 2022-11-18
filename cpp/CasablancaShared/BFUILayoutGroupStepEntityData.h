// Object: BFUILayoutGroupStepEntityData
// ClassId: 2298
// RuntimeId: 43902
// TypeInfo: 0x0000000144D97A90
#include "../Entity/EntityData.h"
#include "../Core/Vec2.h"

namespace CasablancaShared {
    class BFUILayoutGroupStepEntityData : public Entity::EntityData {
        Core::Vec2 GroupStep; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUILayoutGroupStepEntityData) == 0x28);
}