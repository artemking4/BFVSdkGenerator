// Object: UISplineVertexBuilderEntityData
// ClassId: 3770
// RuntimeId: 6236
// TypeInfo: 0x0000000144D1FC70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISplineVertexBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Core::Vec2 Position; // 0x24
        Float32 Tension; // 0x2C
        Float32 Continuity; // 0x30
        Float32 Bias; // 0x34
        Boolean Enabled; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(UISplineVertexBuilderEntityData) == 0x40);
}
#pragma pack(pop)