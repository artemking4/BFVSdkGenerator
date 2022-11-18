// Object: NormalisedMapToWorldPositionEntityData
// ClassId: 2903
// RuntimeId: 64946
// TypeInfo: 0x0000000144D29A20
#include "../Entity/EntityData.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class NormalisedMapToWorldPositionEntityData : public Entity::EntityData {
        Core::Vec2 NormalisedMapPosition; // 0x20
        Float32 ZoomFactor; // 0x28
        char pad_0x2C[0x4];
        Core::Vec3 BigMapOffset; // 0x30
    }; // 0x40
    static_assert(sizeof(NormalisedMapToWorldPositionEntityData) == 0x40);
}
#pragma pack(pop)