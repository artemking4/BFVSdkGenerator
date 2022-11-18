// Object: WaterHeightEntityData
// ClassId: 3482
// RuntimeId: 61691
// TypeInfo: 0x0000000144F72E40
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WaterInteractSim {
    class WaterHeightEntityData : public Entity::SpatialEntityData {
        Core::Realm Realm; // 0x60
        Boolean AutoStart; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(WaterHeightEntityData) == 0x70);
}
#pragma pack(pop)