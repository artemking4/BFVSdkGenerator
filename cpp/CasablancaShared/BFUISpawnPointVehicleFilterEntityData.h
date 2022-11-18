// Object: BFUISpawnPointVehicleFilterEntityData
// ClassId: 2203
// RuntimeId: 8893
// TypeInfo: 0x0000000144D815A0
#include "../CasablancaShared/BFUIFilterEntityBaseData.h"
#include "../CasablancaShared/BFUISpawnPointObject.h"
#include "../CasablancaShared/BFUIVehicleInstanceObjectList.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpawnPointVehicleFilterEntityData : public CasablancaShared::BFUIFilterEntityBaseData {
        CasablancaShared::BFUISpawnPointObject SpawnPoint; // 0x28
        CasablancaShared::BFUIVehicleInstanceObjectList In; // 0x30
        Boolean FilteredAsInvalid; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUISpawnPointVehicleFilterEntityData) == 0x40);
}
#pragma pack(pop)