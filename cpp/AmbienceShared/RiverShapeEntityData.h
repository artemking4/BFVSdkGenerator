// Object: RiverShapeEntityData
// ClassId: 3131
// RuntimeId: 15797
// TypeInfo: 0x0000000144BDF8E0
#include "../Entity/EntityData.h"
#include "../AmbienceShared/RiverShapeData.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class RiverShapeEntityData : public Entity::EntityData {
        AmbienceShared::RiverShapeData River; // 0x20
    }; // 0x28
    static_assert(sizeof(RiverShapeEntityData) == 0x28);
}
#pragma pack(pop)