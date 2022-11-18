// Object: LakeShapeEntityData
// ClassId: 2825
// RuntimeId: 42345
// TypeInfo: 0x0000000144BDF9E0
#include "../Entity/EntityData.h"
#include "../AmbienceShared/LakeShapeData.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class LakeShapeEntityData : public Entity::EntityData {
        AmbienceShared::LakeShapeData Lake; // 0x20
    }; // 0x28
    static_assert(sizeof(LakeShapeEntityData) == 0x28);
}
#pragma pack(pop)