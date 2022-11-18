// Object: TrajectoryEntityData
// ClassId: 3583
// RuntimeId: 43903
// TypeInfo: 0x0000000144ED86F0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Entity {
    class TrajectoryEntityData : public Entity::EntityData {
        Core::LinearTransform OutTransform; // 0x20
    }; // 0x60
    static_assert(sizeof(TrajectoryEntityData) == 0x60);
}
#pragma pack(pop)