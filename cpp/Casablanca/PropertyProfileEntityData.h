// Object: PropertyProfileEntityData
// ClassId: 3071
// RuntimeId: 34726
// TypeInfo: 0x0000000144C82E40
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Core/Vec4.h"
#include "../Core/LinearTransform.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace Casablanca {
    class PropertyProfileEntityData : public Entity::EntityData {
        Int32 InInt; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 InVec3; // 0x30
        Core::Vec4 InVec4; // 0x40
        Core::LinearTransform InTransform; // 0x50
        Float32 InFloat; // 0x90
        char pad_0x94[0x4];
        CString TimerName; // 0x98
        Boolean InBool; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(PropertyProfileEntityData) == 0xB0);
}
#pragma pack(pop)