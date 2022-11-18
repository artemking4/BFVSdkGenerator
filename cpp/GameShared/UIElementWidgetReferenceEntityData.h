// Object: UIElementWidgetReferenceEntityData
// ClassId: 3958
// RuntimeId: 36471
// TypeInfo: 0x0000000144E95930
#include "../Entity/LogicReferenceObjectData.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../GameShared/UIElementInclusionSettings.h"
#include "../GameShared/UIElementTransform.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace GameShared {
    class UIElementWidgetReferenceEntityData : public Entity::LogicReferenceObjectData {
        GameShared::UIElementTransform UIElementTransform; // 0xC0
        Core::Vec3 Color; // 0xF0
        CString InstanceName; // 0x100
        Uint32 InstanceNameHash; // 0x108
        char pad_0x10C[0x4];
        GameShared::UIElementInclusionSettings InclusionSettings; // 0x110
        Float32 Width; // 0x120
        Float32 Height; // 0x124
        Float32 Alpha; // 0x128
        char pad_0x12C[0x4];
        CString CodeAccessIdentifier; // 0x130
        Boolean UseWidgetWidth; // 0x138
        Boolean UseWidgetHeight; // 0x139
        char pad_0x13A[0x6];
    }; // 0x140
    static_assert(sizeof(UIElementWidgetReferenceEntityData) == 0x140);
}
#pragma pack(pop)