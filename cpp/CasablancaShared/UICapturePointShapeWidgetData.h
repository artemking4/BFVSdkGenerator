// Object: UICapturePointShapeWidgetData
// ClassId: 3839
// RuntimeId: 63973
// TypeInfo: 0x0000000144D9C190
#include "../CasablancaShared/UIShapeBaseData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIVisualWidgetType.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UICapturePointShapeWidgetData : public CasablancaShared::UIShapeBaseData {
        Core::Vec3 ContestedColor; // 0x90
        CasablancaShared::UIVisualWidgetType ProjectionType; // 0xA0
        Float32 ContestedShapeAlpha; // 0xA4
        Float32 FriendlyShapeAlpha; // 0xA8
        Float32 EnemyShapeAlpha; // 0xAC
        Boolean ProjectToVisualWidget; // 0xB0
        char pad_0xB1[0xF];
    }; // 0xC0
    static_assert(sizeof(UICapturePointShapeWidgetData) == 0xC0);
}
#pragma pack(pop)