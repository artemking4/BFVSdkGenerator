// Object: UIElementEntityData
// ClassId: 3632
// RuntimeId: 39270
// TypeInfo: 0x0000000144E959B0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../GameShared/UIElementTransform.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"

namespace GameShared {
    class UIElementEntityData : public Entity::EntityData {
        CString InstanceName; // 0x20
        char pad_0x28[0x8];
        GameShared::UIElementTransform UIElementTransform; // 0x30
        Core::Vec3 Color; // 0x60
        Core::LinearTransform Transform; // 0x70
        Uint32 InstanceNameHash; // 0xB0
        Float32 Width; // 0xB4
        Float32 Height; // 0xB8
        Float32 Alpha; // 0xBC
        Boolean Visible; // 0xC0
        char pad_0xC1[0xF];
    }; // 0xD0
    static_assert(sizeof(UIElementEntityData) == 0xD0);
}