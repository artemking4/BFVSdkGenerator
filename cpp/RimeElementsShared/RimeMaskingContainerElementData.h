// Object: RimeMaskingContainerElementData
// ClassId: 3690
// RuntimeId: 15488
// TypeInfo: 0x0000000144F2A2A0
#include "../RimeElementsShared/RimeContainerBaseData.h"
#include "../Entity/GameObjectData.h"
#include "../RimeShared/RimeMaskingMode.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace RimeElementsShared {
    class RimeMaskingContainerElementData : public RimeElementsShared::RimeContainerBaseData {
        Array<Entity::GameObjectData> Masks; // 0x120
        RimeShared::RimeMaskingMode MaskingMode; // 0x128
        Float32 MaskThreshold; // 0x12C
        Float32 GradientStart; // 0x130
        Float32 GradientEnd; // 0x134
        Boolean InvertMask; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(RimeMaskingContainerElementData) == 0x140);
}
#pragma pack(pop)