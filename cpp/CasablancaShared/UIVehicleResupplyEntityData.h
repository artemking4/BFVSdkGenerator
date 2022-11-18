// Object: UIVehicleResupplyEntityData
// ClassId: 3477
// RuntimeId: 25970
// TypeInfo: 0x0000000144D5D760
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../GameShared/UIWorldIconBehavior.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIVehicleResupplyEntityData : public Entity::SpatialEntityData {
        Core::Vec3 IconOffset; // 0x60
        Core::Realm Realm; // 0x70
        Float32 StationActivationRange; // 0x74
        Float32 DestroyedIconAlphaMultiplier; // 0x78
        char pad_0x7C[0x4];
        GameShared::UIWorldIconBehavior IconBehavior; // 0x80
        Boolean Enabled; // 0x88
        Boolean CanVehicleResupply; // 0x89
        char pad_0x8A[0x6];
    }; // 0x90
    static_assert(sizeof(UIVehicleResupplyEntityData) == 0x90);
}
#pragma pack(pop)