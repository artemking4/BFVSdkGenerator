// Object: UISplinePathBuilderEntityData
// ClassId: 3769
// RuntimeId: 61001
// TypeInfo: 0x0000000144D1FBF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISplinePathBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 InputCount; // 0x24
        Float32 LineWidth; // 0x28
        Int32 SubdivisionSteps; // 0x2C
    }; // 0x30
    static_assert(sizeof(UISplinePathBuilderEntityData) == 0x30);
}
#pragma pack(pop)