// Object: DebugRenderEntityData
// ClassId: 2610
// RuntimeId: 45727
// TypeInfo: 0x0000000144DA6E20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceCommons/DebugRenderEntityPropertyInfo.h"
#include "../DiceCommons/DebugShapeType.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace DiceCommons {
    class DebugRenderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Color; // 0x30
        Array<DiceCommons::DebugRenderEntityPropertyInfo> RuntimeProperties; // 0x40
        DiceCommons::DebugShapeType ShapeType; // 0x48
        Float32 Alpha; // 0x4C
        Boolean Visible; // 0x50
        Boolean DepthTest; // 0x51
        char pad_0x52[0xE];
    }; // 0x60
    static_assert(sizeof(DebugRenderEntityData) == 0x60);
}
#pragma pack(pop)