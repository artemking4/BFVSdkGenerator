// Object: SquadCallinVehicleDropData
// ClassId: 403
// RuntimeId: 62294
// TypeInfo: 0x0000000144D35430
#include "../CasablancaShared/SquadCallinBaseData.h"
#include "../Entity/PrefabBlueprint.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinVehicleDropData : public CasablancaShared::SquadCallinBaseData {
        Entity::PrefabBlueprint VehiclePrefabBlueprint; // 0x70
        Float32 SpawnAltitude; // 0x78
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(SquadCallinVehicleDropData) == 0x80);
}
#pragma pack(pop)