// Object: UIBreakthroughDeploySectorsWidgetData
// ClassId: 3837
// RuntimeId: 13702
// TypeInfo: 0x0000000144D9C110
#include "../CasablancaShared/UIShapeBaseData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIVisualWidgetType.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIBreakthroughDeploySectorsWidgetData : public CasablancaShared::UIShapeBaseData {
        Core::Vec3 ContestedColor; // 0x90
        CasablancaShared::UIVisualWidgetType ProcectionType; // 0xA0
        Float32 ContestedSectorAlpha; // 0xA4
        Float32 FriendlySectorAlpha; // 0xA8
        Float32 EnemySectorAlpha; // 0xAC
        Float32 FriendlySectorNeighbouringContestedAlpha; // 0xB0
        Float32 EnemySectorNeighbouringContestedAlpha; // 0xB4
        Float32 LostSectorColorBlend; // 0xB8
        Boolean ProjectToVisualWidget; // 0xBC
        Boolean HideDeactivatedSectors; // 0xBD
        char pad_0xBE[0x2];
    }; // 0xC0
    static_assert(sizeof(UIBreakthroughDeploySectorsWidgetData) == 0xC0);
}
#pragma pack(pop)