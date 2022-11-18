// Object: PlayerLogoEntityData
// ClassId: 3029
// RuntimeId: 47285
// TypeInfo: 0x0000000144D5BCE0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/TeamLogoMapping.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PlayerLogoEntityData : public Entity::EntityData {
        Array<CasablancaShared::TeamLogoMapping> TeamGroundVehicleLogos; // 0x20
        Array<CasablancaShared::TeamLogoMapping> TeamAirVehicleLogos; // 0x28
    }; // 0x30
    static_assert(sizeof(PlayerLogoEntityData) == 0x30);
}
#pragma pack(pop)