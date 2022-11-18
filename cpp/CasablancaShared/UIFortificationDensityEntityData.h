// Object: UIFortificationDensityEntityData
// ClassId: 3474
// RuntimeId: 60922
// TypeInfo: 0x0000000144D12080
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"
#include "../Core/Vec2.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIFortificationDensityEntityData : public Entity::SpatialEntityData {
        Core::LinearTransform IconTransform; // 0x60
        Core::Realm Realm; // 0xA0
        Core::Vec2 IconOffset; // 0xA4
        Boolean Enabled; // 0xAC
        char pad_0xAD[0x3];
    }; // 0xB0
    static_assert(sizeof(UIFortificationDensityEntityData) == 0xB0);
}
#pragma pack(pop)