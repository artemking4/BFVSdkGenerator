// Object: PropertyChangeCounterEntityData
// ClassId: 3053
// RuntimeId: 64663
// TypeInfo: 0x0000000144C82DC0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../Core/Vec4.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Casablanca {
    class PropertyChangeCounterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 InVec3; // 0x30
        Core::Vec4 InVec4; // 0x40
        Core::LinearTransform InTransform; // 0x50
        Float32 InFloat; // 0x90
        Int32 InInt; // 0x94
        Core::Vec2 InVec2; // 0x98
        Boolean InBool; // 0xA0
        char pad_0xA1[0xF];
    }; // 0xB0
    static_assert(sizeof(PropertyChangeCounterEntityData) == 0xB0);
}
#pragma pack(pop)