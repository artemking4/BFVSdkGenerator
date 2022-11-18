// Object: BFUIVehicleSeatLoadoutProviderData
// ClassId: 2421
// RuntimeId: 33612
// TypeInfo: 0x0000000144D4C3F0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUILoadoutConfiguration.h"
#include "../CasablancaShared/BFUIVehicleSeatObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleSeatLoadoutProviderData : public Entity::EntityData {
        CasablancaShared::BFUILoadoutConfiguration LoadoutConfiguration; // 0x20
        CasablancaShared::BFUIVehicleSeatObject Seat; // 0x28
        Boolean UpdateAutomatically; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIVehicleSeatLoadoutProviderData) == 0x38);
}
#pragma pack(pop)