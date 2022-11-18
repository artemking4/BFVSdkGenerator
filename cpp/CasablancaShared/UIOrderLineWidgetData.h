// Object: UIOrderLineWidgetData
// ClassId: 3827
// RuntimeId: 35045
// TypeInfo: 0x0000000144D9BC90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIOrderLineWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Entity::ObjectBlueprint ModelBlueprint; // 0x80
        Float32 XScale; // 0x88
        Float32 YScale; // 0x8C
    }; // 0x90
    static_assert(sizeof(UIOrderLineWidgetData) == 0x90);
}
#pragma pack(pop)