// Object: TransformPartPropertyTrackData
// ClassId: 4548
// RuntimeId: 36625
// TypeInfo: 0x0000000144ED81F0
#include "../Entity/PropertyTrackData.h"
#include "../Entity/TransformPart.h"
#include "../Entity/CurveInfinityType.h"
#include "../Entity/TransformPartPropertyKey.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace Entity {
    class TransformPartPropertyTrackData : public Entity::PropertyTrackData {
        ResourceRef Resource; // 0x28
        Entity::TransformPart TransformPart; // 0x30
        Entity::CurveInfinityType PreInfinity; // 0x34
        Entity::CurveInfinityType PostInfinity; // 0x38
        char pad_0x3C[0x4];
        Array<Entity::TransformPartPropertyKey> Values; // 0x40
        Float32 EvaluatorFps; // 0x48
        Uint32 KeyStartIndex; // 0x4C
        Uint32 KeyCount; // 0x50
        Boolean Weighted; // 0x54
        Boolean IsStatic; // 0x55
        char pad_0x56[0x2];
    }; // 0x58
    static_assert(sizeof(TransformPartPropertyTrackData) == 0x58);
}
#pragma pack(pop)