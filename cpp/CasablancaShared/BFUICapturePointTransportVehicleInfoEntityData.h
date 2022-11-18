// Object: BFUICapturePointTransportVehicleInfoEntityData
// ClassId: 2170
// RuntimeId: 52662
// TypeInfo: 0x0000000144D300A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUITransportVehicleTypeMap.h"
#include "../CasablancaShared/BFUICapturePointObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUICapturePointTransportVehicleInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::BFUITransportVehicleTypeMap> VehicleTypeMap; // 0x28
        CasablancaShared::BFUICapturePointObject CapturePoint; // 0x30
        Boolean UpdateAutomatically; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUICapturePointTransportVehicleInfoEntityData) == 0x40);
}
#pragma pack(pop)