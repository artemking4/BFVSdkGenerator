// Object: UIDeploySectorsWidgetData
// ClassId: 3840
// RuntimeId: 11198
// TypeInfo: 0x0000000144D9C010
#include "../CasablancaShared/UIShapeBaseData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/UIVisualWidgetType.h"
#include "../CasablancaShared/BFUIMinimapWorldViewAsset.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIDeploySectorsWidgetData : public CasablancaShared::UIShapeBaseData {
        Core::Vec3 ContestedColor; // 0x90
        CasablancaShared::UIVisualWidgetType ProjectionType; // 0xA0
        char pad_0xA4[0x4];
        CasablancaShared::BFUIMinimapWorldViewAsset TargetWorldViewAsset; // 0xA8
        Float32 ContestedSectorAlpha; // 0xB0
        Float32 FriendlySectorAlpha; // 0xB4
        Float32 EnemySectorAlpha; // 0xB8
        Boolean UseDecalProjection; // 0xBC
        char pad_0xBD[0x3];
    }; // 0xC0
    static_assert(sizeof(UIDeploySectorsWidgetData) == 0xC0);
}
#pragma pack(pop)